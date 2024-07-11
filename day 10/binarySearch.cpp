// binary search -- only we use in case for binary search

#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int key){
    int start = 0, end = n-1;

    while (start <= end){
        int mid = (start + end) / 2;

        if (arr[mid] == key) { // key found
            return mid;
        } else if (arr[mid] < key) { // 2nd half
            start = mid + 1;
        } else { // 1st half
            end = mid - 1;
        }
    }

    return -1;
}


int main(){
    int arr[] = {2, 4, 6, 8 , 10, 12, 14, 16, 18, 20};
    int num = sizeof(arr) / sizeof(int);

    int key;
    cout << "enter number that you want to check = ";
    cin >> key;

    cout << binarySearch(arr, num, key);

    return 0;
}