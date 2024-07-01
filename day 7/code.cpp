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


int main(){
    assistant(); // Hello :) // work done!

    sayNamaste();

    cout << sum (2, 4) << endl;
    return 0;
}

void sayNamaste(){
    cout << "Namste \n";
}

int sum (int a, int b){
    return a + b;
}