#include<iostream>
using namespace std;

void diagonalSumWithLessTimeComplexity(int matrix[][4], int n){
    // O(N)
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += matrix[i][i]; // primary diagonal
        if (i != n-i-1){
            sum += matrix[i][n-i-1]; // secodary diagonal
        }
    }

    cout << "sum = " << sum << endl;
}

void diagonalsum(int matrix[][4], int n){
    // O(N^2)
    int sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j){ // primary diagonal
                sum += matrix[i][j]; 
            } else if (j == n-i-1){ // secodary diagonal
                sum += matrix[i][j];
            }
        }
    }

    cout << "sum = " << sum << endl;
}

int main(){
    int matrix[][4] = {{1, 2, 3, 4}
                      ,{5, 6, 7, 8}
                      ,{9, 10, 11, 12}
                      ,{13, 14, 15, 16}};

    diagonalsum(matrix, 4); // 68
    diagonalSumWithLessTimeComplexity(matrix, 4); // 68

    

    return 0;
}