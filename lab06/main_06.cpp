#include <iostream>
#include "Polynominal.h"
int main() {
    double coef[]{1,2,1};
    Polynomial p1(2, coef);
    cout << p1 << endl;
    cout << p1.evaluate(1) << endl;
    return 0;
}