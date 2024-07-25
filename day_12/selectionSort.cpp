// selection sort 
// idea -- pick the smallest element(from unsorted part) and put it in the beginning.
// timecomplexity ~ O(n^2)

#include<iostream>
using namespace std;

void printSortedArray(int *arr, int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void selectionSort(int *arr, int n){
    for (int i = 0; i < n-1; i++){
        int minIdx = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

int main(){
    int arr[5] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);

    selectionSort(arr, n);
    cout << "sorted array : ";
    printSortedArray(arr, n);

    return 0;
}