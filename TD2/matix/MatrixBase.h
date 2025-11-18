#ifndef MATRIXBASE_H
#define MATRIXBASE_H
#include <vector> 
#include <iostream>


template <typename T>
class MatrixBase{

    protected:
        std::vector<std::vector<T>> data;
        std::size_t rows;
        std::size_t cols;

    public :
        MatrixBase() = default;
        MatrixBase(std::size_t _rows, std::size_t _cols, T _data) : rows(_rows), cols(_cols), data(_rows, std::vector<T>(_cols, _data)){};  
    
        void addElement(const size_t row, const size_t col, T new_element ){
            data[row][col] = new_element;
        };

        T getElement (std::size_t row, std::size_t col) const {
            return data[row][col];
        };

        size_t getCols() const {
            return cols;
        };

        size_t getRows() const{
            return rows;
        };

        void display(){
            for(size_t i =0; i< rows; i++){
                for(size_t i =0; i< cols; i++){
                    std::cout<< data[rows][cols];
                }
                std::cout<<endl;
            }
        }

        static MatrixBase<short> getIdentity(size_t rows) {
            MatrixBase<short> identity(rows, rows, 0);
            for(int i=0; i<rows; i++){
                for(int j=0; j<rows; j++){
                    if(i==j){
                        identity[i][j] = 1;
                    }
                }
            }
            return identity;
        }

};

#endif