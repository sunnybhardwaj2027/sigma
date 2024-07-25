// inBuilt sort -- O(nlogn)

#include <iostream>
#include <algorithm>
using namespace std;

void printSortedArray(int *arr, int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);

    // for ascending order 
    sort(arr, arr+n);
    cout << "ascending sorted array : ";
    printSortedArray(arr, n);

    cout << endl;

    // for descending order
    sort(arr, arr+n, greater<int>());
    cout << "descending sorted array : ";
    printSortedArray(arr, n);
    
    return 0;
}