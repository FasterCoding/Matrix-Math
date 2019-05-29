#include <iostream>
#include <vector>

#include "Matrix/Matrix.hpp"

int main(int argc, char const *argv[]) {
    
    std::vector<std::vector<int>> matrixDefinitionA = {{5, 6, 9},
                                                        {7, 8, 9}};

    std::vector<std::vector<int>> matrixDefinitionB = {{10, 15},
                                                        {22, 28},
                                                        {15, 15}};

    Matrix matrixA(matrixDefinitionA);
    Matrix matrixB(matrixDefinitionB);

    Matrix* matrixC = matrixA * matrixB;

    matrixA.print();
    std::cout << " * " << std::endl;
    matrixB.print();
    std::cout << " = " << std::endl;
    matrixC->print(); 

    return 0;
}
