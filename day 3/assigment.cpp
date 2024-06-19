#include <iostream>
using namespace std;

int main() {
    // 1.

    int x = 2, y = 5;
    int exp1 = (x * y / x); 
    int exp2 = (x * (y / x)); 
    cout << exp1 << ",";// 5
    cout << exp2 << "\n"; // 4

    // 2.

    x = 10, y = 5;
    exp1 = (y * (x / y + x / y)); 
    exp2 = (y * x / y + y * x / y); 
    cout << exp1 << " "; // 20
    cout << exp2 << "\n"; // 20

    // 3.

    x = 200;
    y = 50;
    int z = 100; 
    if(x > y && y > z){
    cout << "Hello \n";
    }
    if(z > y && z < x){ 
    cout << "C++ \n";
    }
    if((y+200) < x && (y+150) < z){ 
    cout << "Hello C++ \n";
    }
}