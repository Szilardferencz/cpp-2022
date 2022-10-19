//
// Created by Szilárd on 10/19/2022.
//

#include "Matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix(int mRows, int mCols): mRows(mRows), mCols(mCols){
    mElements = new double *[mRows];
    for(int i=0; i<mRows; ++i){
        mElements[i] = new double [mCols];
    }
}
Matrix::~Matrix() {
    for (int i=0;i<mRows;++i)
    {
        delete[] mElements[i];
    }
    delete[] mElements;
}
void Matrix::fillMatrix(double value) {
    for (int i=0;i<mRows;++i)
        std::fill(mElements[i], mElements[i]+mCols, value);
}
void Matrix::printMatrix(ostream &os) const {
    for (int i=0;i<mRows;++i)
    {
        for (int j=0;j<mCols;++j)
        {
            os<<mElements[i][j]<<" ";
        }
        os<<endl;
    }
}
bool Matrix::isSquare() const {
    return mCols==mRows;
}
