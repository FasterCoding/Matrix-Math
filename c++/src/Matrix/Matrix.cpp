#include "Matrix.hpp"

Matrix::Matrix(int width, int height) {
    _matrix.resize(height);
    for (int y = 0; y < height; y++) {
        _matrix[y].resize(width);
    }
}

Matrix::Matrix(std::vector<std::vector<int>> matrix): _matrix(matrix) {}

Matrix::~Matrix() {}

Matrix Matrix::operator*(Matrix& matrix) {

    int newMatrixWidth = getWidth();
    int newMatrixHeight = matrix.getHeight();

    Matrix resultMatrix(newMatrixWidth, newMatrixHeight);
    
    int value = 0;
    for (int y = 0; y < _matrix.size(); y++) {
        for (int x = 0; x < _matrix[0].size(); x++) {
            for (int n = 0; n < matrix.getHeight(); n++) {
                value += _matrix[y][n] * matrix.getValueAt(x, n);
            }
            resultMatrix.setValueAt(x, y, value);
            value = 0;
        }
    }

    return resultMatrix;
}

int Matrix::getValueAt(int& x, int& y) {
    return _matrix[y][x];
}

void Matrix::setValueAt(int& x, int& y, int& value) {
    _matrix[y][x] = value;
}

size_t Matrix::getWidth() {
    return _matrix[0].size();
}

size_t Matrix::getHeight() {
    return _matrix.size();
}

void Matrix::print() {

    for (int y = 0; y < _matrix.size(); y++) {
        for (int x = 0; x < _matrix[0].size(); x++) {
            std::cout << _matrix[y][x] << " ";     
        }
        std::cout << "" << std::endl;
    }
}