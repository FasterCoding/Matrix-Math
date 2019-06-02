from Matrix.Matrix import Matrix
from Vector.Vector import Vector

vectorDefinitionA = [2, 4, 6]

matrixDefinitionA = [[5, 6, 9],
                     [7, 8, 9]]

matrixDefinitionB = [[10, 15],
                     [22, 28],
                     [15, 15]]

matrixA = Matrix()
matrixB = Matrix()

vectorA = Vector()

matrixA.setMatrix(matrixDefinitionA)
matrixB.setMatrix(matrixDefinitionB)

vectorA.setVector(vectorDefinitionA)

matrixC = matrixA.multiplyWithMatrix(matrixB)

vectorB = matrixA.multiplyWithVector(vectorA)

print("=== Matrix ===")

matrixA.print()
print(" * ")
matrixB.print()
print(" = ")
matrixC.print()

print("=== Vector ===")

matrixA.print()
print(" * ")
vectorA.print()
print(" = ")
vectorB.print()
