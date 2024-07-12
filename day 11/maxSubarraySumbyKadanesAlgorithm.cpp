// max subarray sum (using kadane's algorithm)

#include <iostream>
#include <climits>
using namespace std;

void maxSubarraySum(int *arr, int n){
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < n; i++){
        currSum += arr[i];
        maxSum = max(maxSum , currSum);
        
        if(currSum < 0){
            currSum = 0;
        }
    }

    cout << "max subarray sum = " << maxSum << endl;
}

int main(){
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarraySum(arr, n);

    return 0;
}