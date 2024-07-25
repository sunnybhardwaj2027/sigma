// insertion sort 
// idea -- pick an element from unsorted part place it correctly in sorted part.

#include<iostream>
using namespace std;

void printSortedArray(int *arr, int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void insertionSort(int *arr, int n){
    for (int i = 1; i < n; i++){
        int curr = arr[i];
        int prev = i-1;
        while (prev >= 0 && arr[prev] > curr){
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }

        arr[prev + 1] = curr;
    }
}

int main(){
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);

    insertionSort(arr, n);
    cout << "sorted array : ";
    printSortedArray(arr, n);

    return 0;
}