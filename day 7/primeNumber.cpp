#include <iostream>
using namespace std;

bool isPrime(int num){
    for (int i = 2; i < num; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    cout << isPrime(19) << endl; // 1
    cout << isPrime(20) << endl; // 0

    return 0;
}