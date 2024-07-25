#include<iostream>
using namespace std;

void printSortedArray(char *arr, int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void insertionSort(char *arr, int n){
    for (int i = 1; i < n; i++){
        char curr = arr[i];
        int prev = i-1;
        while (prev >= 0 && arr[prev] < curr){
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }

        arr[prev + 1] = curr;
    }
}

int main(){
    char arr[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    int n = sizeof(arr) / sizeof(char);

    insertionSort(arr, n);
    cout << "sorted array : ";
    printSortedArray(arr, n);

    return 0;
}