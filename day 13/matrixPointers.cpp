#include<iostream>
using namespace std;

void func(int (*matrix)[4], int n, int m){
    cout << "0th row ptr" << matrix << endl;
    cout << "1st row ptr" << matrix+1 << endl;
    cout << "2nd row ptr" << matrix+2 << endl;

    cout << "0th row ptr" << *(matrix) << endl;
    cout << "1st row ptr" << *(matrix+1) << endl;
    cout << "2nd row ptr" << *(matrix+2) << endl;

    cout << *(*(matrix+2)+2) << endl; // 37

}

int main(){
    int matrix[][4] = {{10, 20, 30, 40},
                       {15, 25, 35, 45},
                       {27, 29, 37, 48},
                       {32, 33, 39, 50}};

    // 2d array name behaves as row pointer.
    cout << matrix << endl; // 0x61fed0
    cout << matrix << " = " << &matrix[0][0] << endl; // 0x61fed0 = 0x61fed0
    cout << matrix + 1 << " != " << &matrix[0][1] << endl; // 0x61fee0 != 0x61fed4
    cout << matrix + 1 << " = " << &matrix[1][0] << endl; // 0x61fee0 = 0x61fee0

    // matrix pointers in function
    func(matrix, 4, 4);
    // matrix[i][j] == *(*(matrix+i)+j)

    return 0;
}