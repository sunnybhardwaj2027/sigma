// what will ptr2 point to in the following code.

#include <iostream>
using namespace std;

int main(){
    int x = 5, y = 10;
    int *ptr1 = &x, *ptr2 = &y;
    ptr2 = ptr1;

    // ptr1 == ptr2 == &x

    cout << ptr1 << endl;
    cout << ptr2 << endl;
    cout << &x << endl;

    return 0;
}