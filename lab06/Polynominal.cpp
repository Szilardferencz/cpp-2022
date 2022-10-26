//
// Created by Szilárd on 10/26/2022.
//

#include "Polynominal.h"

Polynomial::Polynomial(int degree, const double *coefficients) {
    this->capacity=degree+1;
    this->coefficients=new double[this->capacity];
    for (int i=0;i<degree+1;++i)
    {
        this->coefficients[i]=coefficients[i];
    }
}

ostream &operator<<(ostream &out, const Polynomial &what) {
    for (int i=0;i<what.capacity-1;++i) {
        out << " " << what.coefficients[i] << "*X^" << (what.capacity-1-i) << "+";
    }
    out << what.coefficients[what.capacity-1] << " ";
    return out;
}
Polynomial::~Polynomial() {
    if(coefficients!= nullptr){
        delete[]coefficients;
        capacity = 0;
    }
}
double Polynomial::evaluate(double x) const{
    double p = this->coefficients[0];
    for (int i = 0; i < capacity-1; ++i) {
        p = p*x + coefficients[i+1];
    }
    return p;
}