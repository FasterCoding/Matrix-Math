#include <iostream>
#include <vector>

std::vector<std::vector<int>> multiplyMatrix(std::vector<std::vector<int>> matrixA, std::vector<std::vector<int>> matrixB) {

    std::vector<std::vector<int>> matrixC(matrixA.size());

    for (int r = 0; r < matrixA.size(); r++) {
        matrixC[r].resize(matrixB[0].size());
    }

    for (int y = 0; y < matrixA.size(); y++) {
        for (int x = 0; x < matrixA[0].size(); x++) {
            for (int n = 0; n < matrixB.size(); n++) {

                matrixC[y][x] += matrixA[y][n] * matrixB[n][x];

            }
        }
    }

    return matrixC;
}

void printMatrix(std::vector<std::vector<int>> matrix){
    for (int y = 0; y < matrix.size(); y++) {
        for (int x = 0; x < matrix[0].size(); x++) {

            std::cout << matrix[y][x] << " ";
            
        }
        std::cout << "" << std::endl;
    }
}

int main(int argc, char const *argv[]) {
    
    std::vector<std::vector<int>> matrixA = {{5, 6, 9},
                                             {7, 8, 9}};

    std::vector<std::vector<int>> matrixB = {{10, 15},
                                             {22, 28},
                                             {15, 15}};

    std::vector<std::vector<int>> result = multiplyMatrix(matrixA, matrixB);


    printMatrix(matrixA);
    std::cout << "*" << std::endl;
    printMatrix(matrixB);
    std::cout << "=" << std::endl;
    printMatrix(result);

    return 0; 
}
