#include<iostream>
using namespace std;

int main(){
    // create an array 
    int  marks1[50]; // 0 to 49 index 

    cout << marks1[0] << endl; // garbage value
    cout << marks1[1] << endl;
    cout << marks1[2] << endl;
    cout << marks1[3] << endl;
    // cout << marks1[50] << endl; -- warning

    int marks2[50] = {1, 2, 3};

    cout << marks2[0] << endl; // 1
    cout << marks2[1] << endl; // 2
    cout << marks2[2] << endl; // 3
    cout << marks2[3] << endl; // all other index 0 by default

    int marks3[] = {1, 2, 3};

    cout << marks3[0] << endl; 
    cout << marks3[1] << endl;
    cout << marks3[2] << endl;
    cout << marks3[3] << endl;

    cout << sizeof(marks3) << endl; // 12bytes == 3 length array
    cout << "length of marks3 array = " << sizeof(marks3) / sizeof(int) << endl; // 3

    // input and output of an array

    // output of array

    int arr[25] = {1, 2, 3, 4, 5};

    int len = sizeof(arr) / sizeof(int);

    for (int idx = 0; idx < len; idx++){
        cout << arr[idx] << " ";
    }

    cout << endl;
    
    // input of array

    int n;
    cout << "Enter size of Array = ";
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    
    return 0;
}