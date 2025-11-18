#include "MatrixNumerical.h"
#include "MatrixBase.h"
MatrixNumerical::MatrixNumerical(size_t rows,size_t cols , int _data ) : MatrixBase<int>(rows, cols, _data){
    for(int i=0, i<rows, i++){
        for(int j=0, j<rows, j++){
            data[i][j]=_data;
        }
    }
};

int MatrixNumerical::getDeterminant(){
    //calcul le déterminant
};

MatrixNumerical MatrixNumerical::MatrixNumerical(){
    //calcul la matrice inverse
};
inMatrixNumericalt MatrixNumerical::operator * (MatrixNumerical other){
    // calcul la multiplication
};
MatrixNumerical  MatrixNumerical::operator + (MatrixNumerical other){
    // calcul l'addition
};
MatrixNumerical  MatrixNumerical::operator - (MatrixNumerical other){
    // calcul la soustraction
};
MatrixNumerical  MatrixNumerical::operator / (MatrixNumerical other){
    // calcul la division
};