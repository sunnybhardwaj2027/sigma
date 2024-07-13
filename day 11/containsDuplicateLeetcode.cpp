/* 
Question 1 : Given an integer array nums, return true if any value appears at least
twice in the array, and return false if every element is distinct. [link]
Examples :
Input: nums = [1,2,3,4]
Output: false
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
*/

#include <iostream>
using namespace std;

bool checkDuplicy(int *arr, int n){
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (arr[i] == arr[j]){
                return false;
            }
        }
    }

    return true;
}

int main(){
    int arr1[] = {1,2,3,4};
    int n1 = sizeof(arr1) / sizeof(int);

    int arr2[] = {1,1,1,3,3,4,3,2,4,2};
    int n2 = sizeof(arr2) / sizeof(int);

    cout<< checkDuplicy(arr2, n2) << endl; // 0
    cout<< checkDuplicy(arr1, n1) << endl; // 1

    return 0;
}