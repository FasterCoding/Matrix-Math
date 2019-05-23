
public class MatrixMultiplication {


    public static void main(String[] args) {
        
        // Matrix definitions
        int[][] matrixA = {{5, 6, 9},
                           {7, 8, 9}};

        int[][] matrixB = {{10, 15},
                           {22, 28},
                           {15, 15}};

        int[][] matrixC = multiplyMatrix(matrixA, matrixB);


        // Terminal output
        printMatrix(matrixA);
        System.out.println("*");
        printMatrix(matrixB);
        System.out.println("=");
        printMatrix(matrixC);

    }

    public static void printMatrix(int[][] matrix) {
        for (int y = 0; y < matrix.length; y++) {
            for (int x = 0; x < matrix[0].length; x++) {
    
                System.out.print(matrix[y][x] + " ");
                
            }
            System.out.print("\n");
        }
    }


    public static int[][] multiplyMatrix(int[][] matrixA, int[][] matrixB) {

        // Initialize matrixC
        int[][] matrixC = new int[matrixB[0].length][matrixA.length];

        // Multiply matrixA with matrixB
        for (int y = 0; y < matrixA.length; y++) {
            for (int x = 0; x < matrixB[0].length; x++) {
                for (int n = 0; n < matrixB.length; n++) {
    
                    matrixC[y][x] += matrixA[y][n] * matrixB[n][x];
    
                }
            }
        }

        return matrixC;
    }

}