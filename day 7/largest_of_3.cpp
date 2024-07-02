#include <iostream>
using namespace std;

int largest(int a, int b, int c){
    if (a > b){
        if (a > c){
            return a;
        } else {
            return c;
        }
    } else {
        if (b > c){
            return b;
        } else {
            return c;
        }
    }
}

int main(){

    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    cout << "largest(" << num1 << "," << num2 << "," << num3 << ")" << " = " << largest(num1, num2, num3) << endl;

    return 0;
}