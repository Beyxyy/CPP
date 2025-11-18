#ifndef MATRIXNUMERICAL_H
#define MATRIXNUMERICAL_H
#include <vector> 

class MatrixNumerical : public MatrixBase<int> {

    public :
        MatrixNumerical(size_t _rows, size_t _cols, int _data) override;
        int getDeterminant() const;
        MatrixNumerical getInverse() const;
        MatrixNumerical operator * (MatrixNumerical other) const;
        MatrixNumerical operator + (MatrixNumerical other) const;
        MatrixNumerical operator - (MatrixNumerical other) const;
        MatrixNumerical operator / (MatrixNumerical other) const;

}

#endif