// counting sort - O(n + range)
// idea -- use a frequency count of element for min to max.
// it gives best complexity if all the numbers are positive and range is very less. ~ O(n)

#include<iostream>
#include<climits>
using namespace std; 

void printSortedArray(int *arr, int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void countSort(int *arr, int n){
    int freq[100000] = {0};
    int minVal = INT_MIN;
    int maxVal = INT_MAX;

    for (int i = 0; i < n; i++){
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    // first step -- O(n)
    for (int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    // second step -- O(range) = O(max - min)
    for (int i = minVal, j = 0; i <= maxVal; i++){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }
}
 
int main(){
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);

    countSort(arr, n);
    cout << "sorted array : ";
    printSortedArray(arr, n);

    return 0;
}