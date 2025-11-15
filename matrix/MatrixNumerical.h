#ifndef MATRIXNUMERICAL_H
#define MATRIXNUMERICAL_H

#include "MatrixBase.h"

class MatrixNumerical : public MatrixBase<int> {

public:

    MatrixNumerical(size_t r, size_t c, int value = 0);

    int getDeterminant() const;
    MatrixNumerical getInverse() const;

    MatrixNumerical operator+(const MatrixNumerical& other) const;
    MatrixNumerical operator-(const MatrixNumerical& other) const;
    MatrixNumerical operator*(const MatrixNumerical& other) const;
    MatrixNumerical operator/(const MatrixNumerical& other) const;

private:
    MatrixNumerical getCofactor(size_t row, size_t col) const;
};

#endif
