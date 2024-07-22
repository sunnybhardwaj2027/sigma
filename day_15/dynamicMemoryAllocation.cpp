#include<iostream>
using namespace std;

int main(){
    // int arr[100] = {1, 2, 3, 4, 5}; -- isme kya hoga run time se phle hi memory allocate hai 100 int ke equal.

    int size;
    cin >> size; // 10

    int *arr = new int[size]; // yha pe new key word hai iske help se hm runtime pe memory allocate kar skate size int ke equal.
    /*
    arr[0] => *(arr + 0)
    arr[1] => *(arr + 1)
    arr[2] => *(arr + 2)
    */

   int x = 1;
   for (int i = 0; i < size; i++){
    arr[i] = x;
    cout << *(arr + i) << " "; // 1 2 3 4 5 6 7 8 9 10
    x++;
   }

    return 0;
}