from Vector.Vector import Vector

class Matrix():
    
    def __init__(self, width = 0, height = 0):
        self._matrix = [[0 for x in range(width)] for y in range(height)]


    def multiplyWithMatrix(self, matrix):
        
        resultMatrix = Matrix(matrix.getWidth(), self.getHeight())

        value = 0
        for y in range(self.getHeight()):
            for x in range(matrix.getWidth()):
                for n in range(matrix.getHeight()):
                    value += self._matrix[y][n] * matrix.getValueAt(x, n)

                resultMatrix.setValueAt(x, y, value)
                value = 0

        return resultMatrix
    
    def multiplyWithVector(self, vector):

        resultVector = Vector(vector.getSize())

        value = 0
        for y in range(self.getHeight()):
            for x in range(self.getWidth()):
                value += self._matrix[y][x] * vector.getValueAt(x)
            
            resultVector.setValueAt(x, value)
            value = 0
        
        return resultVector

    def getValueAt(self, x, y):
        return self._matrix[y][x]


    def setValueAt(self, x, y, value):
        self._matrix[y][x] = value


    def getWidth(self):
        return len(self._matrix[0])    


    def getHeight(self):
        return len(self._matrix)


    def setMatrix(self, matrix):
        self._matrix = matrix


    def print(self):
        for y in range(self.getHeight()):
            for x in range(self.getWidth()):
                print(self._matrix[y][x], end=' ')

            print('')