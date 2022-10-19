//
// Created by Szilárd on 10/19/2022.
//

#ifndef MAIN_03_CPP_MATRIX_H
#define MAIN_03_CPP_MATRIX_H
#include <iostream>
#include <stdexcept>
using namespace std;


class Matrix {
public:
//Methods
    void fillMatrix(double value);
    void printMatrix(ostream& os = cout) const;
    void randomMatrix(int a, int b);
    // Default constructor
    Matrix( int mRows = 10, int mCols =10);
// Copy constructor
//    Matrix(const Matrix& what);
//// Move constructor
//    Matrix( Matrix&& what );
// Destructor
    ~Matrix();
    bool isSquare() const;
private:
//Data
    double ** mElements;
    int mRows; //number of rows
    int mCols; //number of columns
};

#endif //MAIN_03_CPP_MATRIX_H
