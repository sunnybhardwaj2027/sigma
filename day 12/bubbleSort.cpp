// bubble sort
// idea -- large element comes to end by swapping with adgacent element.

#include <iostream>
using namespace std;

void print(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

void bubbleSort(int *arr, int n){
    for (int i = 0; i < n-1; i++){
        bool isSwap = false;
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }

        if(!isSwap){ // because of this we can reduce the time complexcity.
            return;
        }
    }

}

int main(){
    int arr[5] = {5, 4, 3, 1, 2};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr, n);
    cout << "sorted array : ";
    print(arr, n);

    return 0;
}