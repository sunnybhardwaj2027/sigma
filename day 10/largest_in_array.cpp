#include<iostream>
using namespace std;

int main(){

    int arr[] = {2, 5, 7, 3, 9, 10, 23, 0};
    int n = sizeof(arr) / sizeof(int);

    int max = arr[0];
    for(int i = 0; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
            cout << "assigning value " << arr[i] << " to max\n";
        }
    }

    cout << "max in array = " << max << endl;

    return 0;
}