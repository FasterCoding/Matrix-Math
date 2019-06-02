package com.fastercoding;

import com.fastercoding.matrix.Matrix;

public class Main {

    public static void main(String[] args) {

        int[][] matrixDefinitionA = {{5, 6, 9},
                           {7, 8, 9}};

        int[][] matrixDefinitionB = {{10, 15},
                           {22, 28},
                           {15, 15}};
        
        Matrix matrixA = new Matrix(matrixDefinitionA);
        Matrix matrixB = new Matrix(matrixDefinitionB);

        Matrix matrixC = matrixA.multiplyWith(matrixB);

        matrixA.print();
        System.out.println(" * ");
        matrixB.print();
        System.out.println(" = ");
        matrixC.print();

    }
    
}