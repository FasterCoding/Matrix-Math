class Vector():

    def __init__(self, width = 0):
        self._vector = [0 for y in range(width)]

    def setVector(self, vector):
        self._vector = vector

    def getValueAt(self, x):
        return self._vector[x]

    def setValueAt(self, x, value):
        self._vector[x] = value

    def getSize(self):
        return len(self._vector)

    def print(self):
        for x in range(self.getSize()):
            print(self._vector[x], end=' ')