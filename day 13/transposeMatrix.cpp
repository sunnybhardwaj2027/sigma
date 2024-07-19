/*
    Question 3 : Write a program to Find Transpose of a Matrix. 
    What is Transpose?
    Transpose of a matrix is the process of swapping the rows to columns. For a 2x3 
    matrix,
    Matrix
    a11 a12 a13 
    a21 a22 a23
    Transposed Matrix 
    a11 a21
    a12 a22
    a13 a23

*/

#include<iostream>
using namespace std;

void printTransposeMatrix(int matrix[][3], int row, int col){
    int transposeMatrix[col][row] = {{0}};
    for (int i = 0; i < col; i++){
        for (int j = 0; j < col; j++){
            transposeMatrix[i][j] = matrix[j][i];
        }
    }

    // print transpose matrix

    for (int i = 0; i < col; i++){
        for (int j = 0; j < row; j++){
            cout << transposeMatrix[i][j] << "   ";
        }
        cout << endl;
    }
}

int main(){
    int row = 2, col = 3;
    int matrix[][3] = { {2, 3, 7}, {5, 6, 7} };
    printTransposeMatrix(matrix, 2, 3);

    return 0;
}

