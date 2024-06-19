// constant

#include <iostream>
using namespace std;

int main(){
    const int a = 10;
    cout << a << endl;

    // typecasting
    // implicit conversion

    cout << (10/3) << endl; // 3
    cout << (10/3.0) << endl; // 3.33333
    cout << 'a' + 1 << endl; // 98
    cout << true + 1 << endl; // 2
    cout << 'a' + 1.2 << endl; // 98.2

    // explicit conversion

    cout << 'A' << endl; // a
    cout << (int)('A') << endl; // 65
    float PI = 3.14;
    cout << int (PI) << endl; // 3
    cout << (float)10/3 << endl; // 3.33333
    cout << (char)('A' + 1) << endl; // B

    cout << (bool)3 + 2 << endl; // 3
    cout << (23.5 + 2 + 'A') << endl; // 90.5

    // unary operators
    int x = 4;
    x++;
    cout << x << endl; // 5 

    x--;
    cout << x << endl; // 4

    int y = x++;
    cout << "x = " << x << endl; // 5
    cout << "y = " << y << endl; // 4

    x = 4;

    y = ++x;
    cout << "x = " << x << endl; // 5
    cout << "y = " << y << endl; // 5

    // relational operator
     
    x = 3;
    y = 5;
    cout << (x > y) << endl;// False -- 0





    return 0;

}