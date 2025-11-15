#include "MatrixNumerical.h"
#include <cmath>
#include <iostream>

MatrixNumerical::MatrixNumerical(size_t r, size_t c, int v)
: MatrixBase<int>(r, c, v) {}

MatrixNumerical MatrixNumerical::getCofactor(size_t p, size_t q) const {
    MatrixNumerical cofarctor(rows - 1, cols - 1, 0);
    size_t i2 = 0, j2 = 0;

    for(size_t i = 0; i < rows; i++){
        if(i == p) continue;
        j2 = 0;
        for(size_t j = 0; j < cols; j++){
            if(j == q) continue;
            cofarctor.data[i2][j2++] = data[i][j];
        }
        i2++;
    }
    return cofarctor;
}

int MatrixNumerical::getDeterminant() const {
    if(rows != cols){
        std::cout<<"Matrix must be square" <<std::endl;

    }

    if(rows == 1) return data[0][0];
    if(rows == 2){
        return data[0][0] * data[1][1] - data[0][1] * data[1][0];
    }

    int det = 0;
    for(size_t j = 0; j < cols; j++){
        MatrixNumerical cofactor = getCofactor(0, j);
        det += ( (j % 2 == 0 ? 1 : -1) * data[0][j] * cofactor.getDeterminant());
    }
    return det;
}

MatrixNumerical MatrixNumerical::getInverse() const {
    int det = getDeterminant();
    if(det == 0) {
        std::cout<<"Matrix not invertible"<<std::endl;
    }

    MatrixNumerical adj(rows, cols, 0);

    for(size_t i = 0; i < rows; i++){
        for(size_t j = 0; j < cols; j++){
            MatrixNumerical c = getCofactor(i, j);
            adj.data[j][i] = ((i + j) % 2 == 0 ? 1 : -1) * c.getDeterminant();
        }
    }

    MatrixNumerical inv(rows, cols, 0);
    for(size_t i = 0; i < rows; i++){
        for(size_t j = 0; j < cols; j++){
            inv.data[i][j] = adj.data[i][j] / det;
        }
    }
    return inv;
}

MatrixNumerical MatrixNumerical::operator+(const MatrixNumerical& other) const {
    MatrixNumerical out(rows, cols, 0);
    for(size_t i = 0; i < rows; i++)
        for(size_t j = 0; j < cols; j++)
            out.data[i][j] = data[i][j] + other.data[i][j];
    return out;
}

MatrixNumerical MatrixNumerical::operator-(const MatrixNumerical& other) const {
    MatrixNumerical out(rows, cols, 0);
    for(size_t i = 0; i < rows; i++)
        for(size_t j = 0; j < cols; j++)
            out.data[i][j] = data[i][j] - other.data[i][j];
    return out;
}

MatrixNumerical MatrixNumerical::operator*(const MatrixNumerical& other) const {
    if(cols != other.rows){
        std::cout<< "incohrénce entre la dimension des 2 matrices";
    } 

    MatrixNumerical out(rows, other.cols, 0);

    for(size_t i = 0; i < rows; i++)
        for(size_t j = 0; j < other.cols; j++)
            for(size_t k = 0; k < cols; k++)
                out.data[i][j] += data[i][k] * other.data[k][j];

    return out;
}

MatrixNumerical MatrixNumerical::operator/(const MatrixNumerical& other) const {
    return (*this) * other.getInverse();
}
