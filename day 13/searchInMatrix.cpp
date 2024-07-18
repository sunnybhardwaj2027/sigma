#include<iostream>
using namespace std;

// brute force approach
bool bruteForce(int matrix[][4], int n, int m, int key){
    // O(N^2)
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(matrix[i][j] == key){
                cout << "i = " << i << " and " << "j = " << j << endl;
                return true;
            }
        }
    }

    cout << "key not found.\n";
    return false;
}

// binary search approach
bool binarySearch(int matrix[][4], int n, int m, int key){
    // O(N*logM) or O(M*logN) -- it depends whether you want to binary search in row or column.
    for (int i = 0; i < n; i++){
        int start = 0, end = m-1;
        while (start <= end){
            int mid = (start+end)/2;

            if(matrix[i][mid] == key){
                cout << "i = " << i << " and " << "j = " << mid << endl;
                return true;          
            } else if (matrix[i][mid] < key){ // 2nd half 
                start = mid + 1;
            } else { // 1st half
                end = mid - 1;
            }
        }
    }

    cout << "key not found.\n";
    return false;
}

// staircase approach
bool staircaseApproach(int matrix[][4], int n, int m, int key){
    // O(N + M)
    int i = 0, j = m-1;
    while (i < n && j >= 0){
        if (matrix[i][j] == key){
            cout << "i = " << i << " and " << "j = " << j << endl;
            return true;
        } else if (matrix[i][j] < key){ // down
            i++;
        } else { // left
            j--;
        }
    }

    cout << "key not found.\n";
    return false;
}

int main(){
    int matrix[][4] = {{10, 20, 30, 40},
                       {15, 25, 35, 45},
                       {27, 29, 37, 48},
                       {32, 33, 39, 50}};
    int key = 33;
    bruteForce(matrix, 4, 4, key);
    binarySearch(matrix, 4, 4, key);
    staircaseApproach(matrix, 4, 4, key);
    return 0;
}