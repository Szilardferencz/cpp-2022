#include <iostream>
#include "Matrix.h"
using namespace std;

int main() {
    Matrix m1(2,3);
    m1.fillMatrix(10);
    m1.printMatrix();
    return 0;
}