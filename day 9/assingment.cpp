#include <iostream>
using namespace std;

void multiplyBy2(int &a, int &b , int &c){
    a *= 2;
    b *= 2;
    c *= 2;
}

int main(){

    // Q1
    int x;
    int *ptr;

    x = 7;
    ptr = &x;

    cout << *ptr << endl; // 7

    // Q2

    int k = 1, l = 2, m = 3;
    multiplyBy2(k, l, m);
    cout << k << l << m << endl;

    // Q3 what will be output of following code.

    int a = 32;
    int *ptrr = &a;

    char ch = 'A';
    char &cho = ch;

    cho += a;
    *ptrr += ch;

    cout << a << " , " << ch << endl; // 129, a



    return 0;
}