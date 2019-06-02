from Matrix.Matrix import Matrix

matrixDefinitionA = [[5, 6, 9],
                     [7, 8, 9]]

matrixDefinitionB = [[10, 15],
                     [22, 28],
                     [15, 15]]

matrixA = Matrix()
matrixB = Matrix()

matrixA.setMatrix(matrixDefinitionA)
matrixB.setMatrix(matrixDefinitionB)

matrixC = matrixA.multiplyWithMatrix(matrixB)

matrixA.print()
print(" * ")
matrixB.print()
print(" = ")
matrixC.print()