#ifndef __MATRIX__
#define __MATRIX__

#include <iostream>
#include <vector>

class Matrix {

private:
    
    std::vector<std::vector<int>> _matrix;

public:

    Matrix(int width, int height);
    Matrix(std::vector<std::vector<int>> matrix);
    ~Matrix();

    Matrix* operator*(Matrix& matrix);

    int getValueAt(int& x, int& y);
    void setValueAt(int& x, int& y, int& value);
    size_t getWidth();
    size_t getHeight();

    void print();
};

#endif
