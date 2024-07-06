#include<iostream>
using namespace std;

void printArray(int *arr, int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int *arr, int n){
    int copyArr[n];

    for(int i = 0; i < n; i++){
        copyArr[i] = arr[n - i - 1];
    }

    for(int i = 0; i < n; i++){
        arr[i] = copyArr[i];
    }

}

int main(){
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    // with extra spaces
    cout << "with extra space" << endl;
    reverseArray(arr, n);
    printArray(arr, n); 

    // without extra spaces
    int arr2[] = {5, 4, 3, 9, 2};

    int start = 0, end = n-1;
    while(start < end){
        int temp = arr2[start];
        arr2[start] = arr2[end];
        arr2[end] = temp;

        start++;
        end--;
    }

    cout << "reverse without extra spaces" << endl;
    printArray(arr2, n);



    return 0;
}