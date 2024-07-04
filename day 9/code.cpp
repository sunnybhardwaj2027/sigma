#include <iostream>
using namespace std;

void changeA1(int a){
    a = 20;
    cout << a << endl;
}

void changeA2 (int *ptr){
    *ptr = 20;
    cout << *ptr << endl;
}

void changeA3 (int &param){
    param = 20;
    cout << param << endl;
}

int main(){

    // addressOf operator
    
    int a = 3, b= 10;

    cout << "&a = "  << &a << endl << "&b = " << &b << endl;

    // pointers
    float pi = 3.14;

    int *ptr = &a;
    float *ptr2 = &pi;

    cout << &a << " = " << ptr << endl;
    cout << &pi << " = " << ptr2 << endl;

    cout << "size of pointer = " << sizeof(ptr) << endl;
    cout << "size of pointer = " << sizeof(ptr2) << endl;

    // pointer to pointer
    int **pptr = &ptr;
    cout << &ptr << " = " << pptr << endl;

    // dereference operator
    cout << a << endl;
    cout << &a << endl;
    cout << *(&a) << endl;
    cout << *ptr << endl; // value at address

    *ptr = 20;
    cout << a << endl;

    // null pointer

    int *ptr3 = NULL;
    cout << ptr3 << endl; // 0x0

    // cout << *ptr3 << endl; --- segmentation error

    // pass by value

    cout << "pass by value" << endl;

    a = 10;
    changeA1(a); // 20
    cout << a << endl; // 10

    // pass by reference

    cout << "pass by reference(pointers)" << endl;

    changeA2(&a); // 20 
    cout << a << endl; // 20

    // reference variables

    cout << "pass by reference(reference variable)" << endl;

    a = 10;
    changeA3(a);
    cout << a << endl;

    int x = 5;
    int &y = x;

    y = 25;

    cout << y << endl;
    cout << x << endl;


    return 0;
}