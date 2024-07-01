#include <iostream>
using namespace std;

int sum (int a, int b){
    cout << (a + b) << endl;
    return a + b;
}

int sum (double a, double b){
    cout << (a + b) << endl;
}

int sum (int a, int b, int c){
    cout << (a + b + c) << endl;
}

int main(){

    sum (2, 3); // 5
    sum (12, 13); // 25
    sum (2.5, 1.5); // 4 -- function khud hi samjh jayega -- khud dekh lega kaun sa sum mein double value as a parmeter le rha hai
    sum (1, 2, 3); // 6 -- khud dekh lega kaun sa sum mein 3 parameters hai

    return 0;
}