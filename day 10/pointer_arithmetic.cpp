#include <iostream>
using namespace std;

int main(){
    //3. addition and substraction of pointers
    // ptr1 + ptr2 -- invalid operation
    // ptr1 - ptr2 -- both should have to be of same type

    int arr[20] = {1, 2, 3, 4, 5, 6};
    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3;

    cout << *ptr1 << endl; // 1
    cout << *ptr2 << endl; // 4

    cout << ptr2 - ptr1 << endl; // 3 -- means there is 3 integer space 

    // 4. comparison (==, <=, >=, >, <)
    cout << (ptr2 > ptr1) << endl; // 1

    cout << (ptr1 == arr) << endl; // 1 -- generally we use this
    
    return 0;
}