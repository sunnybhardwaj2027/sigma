#include<iostream>
using namespace std;

/*

 1   2   3   4
 5   6   7   8
 9  10  11  12
13  14  15  16

*/

void spiralMatrix(int matrix[][4], int n, int m){
    int sRow = 0, sCol = 0;
    int eRow = n-1, eCol = m-1;

    while ((sRow <= eRow && sCol <= eCol)){
        
        // for top
        for (int j = sCol; j <= eCol; j++){
            cout << matrix[sRow][j] << " ";
        }

        // for right 
        for (int i = sRow+1; i <= eRow; i++){
            cout << matrix[i][eCol] << " ";
        }

        // for bottom
        for (int j = eCol-1; j >= sCol; j--){
            if (sRow == eRow){ // middle
                break;
            }
            cout << matrix[eRow][j] << " ";
        }

        // for left
        for (int i = eRow-1; i >= sRow+1; i--){
            if (sCol == eCol){ // middle
                break;
            }
            cout << matrix[i][sCol] << " ";
        }

        sCol++, sRow++;
        eCol--, eRow--;
    }
}

int main(){
    int matrix[][4] = {{1, 2, 3, 4},
                       {5, 6, 7, 8},
                       {9, 10, 11, 12},
                       {13, 14, 15, 16}};

    spiralMatrix(matrix, 4, 4);

    return 0;
}