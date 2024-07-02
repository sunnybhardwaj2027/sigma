#include <iostream>
using namespace std;

bool isPrime(int a){
    for (int i = 2; i < a; i++){
        if (a % i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    int n1, n2;
    cin >> n1;
    cin >> n2;

    for (int i = n1; i <= n2; i++){
        int x = isPrime(i);
        if (x == 1){
            cout << i << " ";
        }
    }


    return 0;
}