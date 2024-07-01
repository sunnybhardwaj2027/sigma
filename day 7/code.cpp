// functions

#include <iostream>
using namespace std;

void sayHello(){
    cout << "Hello :)\n";
}

void assistant(){
    sayHello();
    cout << "work done!" << endl;
}

void sayNamaste(); // forward declaration -- agar kisi bhi function ko main() ke baad likhna chahte ho to main ke phle declare krna pdega.

int sum (int a, int b);

int prod (int a, int b);

bool isEven (int num);

int fact(int n);


int main(){
    assistant(); // Hello :) // work done!

    sayNamaste();

    cout << sum (2, 4) << endl;

    cout << prod (2, 4) << endl;

    cout << isEven(20) << endl; // 1
    cout << isEven(19) << endl; // 0

    cout << "factorial of " << 5 << " is " << fact(5) << endl; // 120
 
    return 0;
}

void sayNamaste(){
    cout << "Namste \n";
}

int sum (int a, int b){
    return a + b;
}

int prod(int a, int b){
    return a * b;
}

bool isEven (int num){
    if (num % 2 == 0){
        return true;
    } else {
        return false;
    }
}

int fact(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
