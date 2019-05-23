
def multiplyMatrix(matrixA, matrixB):
    
    # Initialize matrixC with zero's
    matrixC = [[0 for x in range(len(matrixB[0]))] for y in range(len(matrixA))]

    # Multiply the matrix
    for y in range(len(matrixA)):
        for x in range(len(matrixB[0])):
            for n in range(len(matrixB)):
                matrixC[y][x] += matrixA[y][n] * matrixB[n][x]
                

    return matrixC

def printMatrix(matrix):
    
    for y in range(len(matrix)):
        for x in range(len(matrix[0])):
            print(matrix[y][x], end=' ')

        print('')

if __name__ == "__main__":

    # Matrix definition
    matrixA = [[5, 6, 9],
               [7, 8, 9]]

    matrixB = [[10, 15],
               [22, 28],
               [15, 15]]

    matrixC = multiplyMatrix(matrixA, matrixB)


    printMatrix(matrixA)
    print('*')
    printMatrix(matrixB)
    print('=')
    printMatrix(matrixC)
