#include<iostream>
using namespace std;

int main(){
    int students[2][3] = {{100, 90, 80}, {95, 85, 75}};
    cout << students[0][0] << endl;

    // input and output of 2d arrays
    cout << "enter of elements for 2d array : ";
    int arr[3][4];

    // input
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    // output
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // 2d array also stored linearly in system memory.

    return 0;
}