#include <iostream>
using namespace std;

void binToDec(int binNum){
    int n = binNum;
    int pow = 1; // 2^0 2^1 2^2 ---
    int decNum = 0;

    while (n > 0){
        int lastDigit = n % 10;
        decNum += lastDigit * pow;
        pow *= 2;
        n = n / 10;
    }
    cout << "dec(" << decNum << ")" << endl;
}

int main(){
    int binNum;
    cout << "Enter any binary number = ";
    cin >> binNum;

    binToDec(binNum);

    return 0;
}