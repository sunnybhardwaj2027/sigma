#include<iostream>
using namespace std;

/*
void printArr(int nums[]){
    int n = sizeof(nums) / sizeof(int); // -- warning will be generated because yha pe nums jo ek pointer hai int pointer = 8 aur sizeof(int) = 4 isiliye n = 2 jo ki galat aayega isiliye array jab bhi pass hota h by reference hota hai as a pointer hota hai isiliye jab bhi array pass krenge uske sath length bhi pass krenge.

    for (int i = 0; i < n; i++){
        cout << nums[i] << ",";
    }
    cout << endl;
}

*/

void printArr(int nums[], int n){
    for (int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}

void printArr2(int *nums, int n){
    for (int i = 0; i < n; i++){
        cout << *(nums+i) << " ";
    }
    cout << endl;
}

int main(){

    int a = 5;
    int *ptr = &a;

    cout << ptr << endl; // 0x......

    int arr[] = {1, 2, 3, 4, 5};

    cout << arr << endl; // 0x..... -- array name became a pointer which is pointing towards the address of first element of array.

    cout << arr + 1 << endl; // next element of array

    cout << *arr << endl; // arr[0]
    cout << *(arr + 1) << endl; // arr[1]
    cout << *(arr + 2) << endl; // arr[2]

    // printArr(arr); -- array ke sath sath uska length bhi pas karna hai

    int n = sizeof(arr) / sizeof(int);

    printArr(arr, n);
    printArr2(arr, n);

    return 0;
}