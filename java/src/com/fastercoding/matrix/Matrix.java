package com.fastercoding.matrix;

import java.util.Vector;

public class Matrix {

    private int[][] _matrix;

    public Matrix(int width, int height) {
        this._matrix = new int[height][width];
    }

    public Matrix(int[][] matrix) {
        this._matrix = matrix;
    }

    public Matrix multiplyWith(Matrix matrix) {

        int newMatrixWidth = matrix.getWidth();
        
        int newMatrixHeight = getHeight();
        Matrix resultMatrix = new Matrix(newMatrixWidth, newMatrixHeight);

        int value = 0;
        for (int y = 0; y < this._matrix.length; y++) {
            for (int x = 0; x < matrix.getWidth(); x++) {
                for (int n = 0; n < matrix.getHeight(); n++) {
                    value += this._matrix[y][n] * matrix.getValueAt(x, n);  
                }
                resultMatrix.setValueAt(x, y, value);
                value = 0;
            }
        }

        return resultMatrix;
    }

    public int getValueAt(int x, int y) {
        return this._matrix[y][x];
    }

    public void setValueAt(int x, int y, int value) {
        this._matrix[y][x] = value;
    }

    public int getWidth() {
        return this._matrix[0].length;
    }

    public int getHeight() {
        return this._matrix.length;
    }

    public void print() {
        for (int y = 0; y < _matrix.length; y++) {
            for (int x = 0; x < _matrix[0].length; x++) {
                System.out.print(this._matrix[y][x] + " ");   
            }
            System.out.print("\n");
        }
    }

}

