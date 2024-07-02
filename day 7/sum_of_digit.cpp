#include <iostream>
using namespace std;

int sumDigit(int num){
    int sum = 0;
    while (num > 0){
        int lastdigit = num % 10;
        sum = sum + lastdigit;
        num = num / 10;
    }

    return sum;
}

int main(){

    int num;
    cin >> num;

    cout << "sum of digit of " << num << " = " << sumDigit(num)<< endl;
    
    return 0;
}