// write a function to find binomial coffiecient for given n and r.

#include <iostream>
using namespace std;

int factorial(int num){
    int fact = 1;
    for (int i = 1; i <= num; i++){
        fact *= i;
    }
    return fact;
}

int binCoff(int n, int r){
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n - r);

    int result = val1 / (val2 * val3);

    return result;
}

int main(){

    int n, r;
    cout << "n = ";
    cin >> n;

    cout << "r = ";
    cin >> r;

    cout << binCoff(n, r) << endl;

    return 0;
}