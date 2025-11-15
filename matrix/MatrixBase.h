#ifndef MATRIXBASE_H
#define MATRIXBASE_H

#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
class MatrixBase {

protected:
    std::vector<std::vector<T>> data;
    size_t rows;
    size_t cols;

public:

    MatrixBase() : rows(0), cols(0) {}

    MatrixBase(size_t r, size_t c, T value)
        : rows(r), cols(c), data(r, std::vector<T>(c, value)) {}

    void addElement(size_t row, size_t col, T value) {
        data.at(row).at(col) = value;
    }

    T getElement(size_t row, size_t col) const {
        return data.at(row).at(col);
    }

    size_t getRows() const { return rows; }
    size_t getCols() const { return cols; }

    void display() const {
        for(size_t i = 0; i < rows; i++){
            for(size_t j = 0; j < cols; j++){
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    static MatrixBase<T> getIdentity(size_t n) {
        MatrixBase<T> M(n, n, 0);
        for(size_t i = 0; i < n; i++){
            M.data[i][i] = 1;
        }
        return M;
    }
};

#endif
