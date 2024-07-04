#include <iostream>
using namespace std;

int decToBin(int decNo){
    int n = decNo;
    int revBinNo = 0;

    while (n > 0){
        int lastDigit = n % 2;
        revBinNo = revBinNo * 10 + lastDigit;
        n = n / 2;
    }

    int binNo = 0;

    while (revBinNo > 0){
        int lastDigit = revBinNo % 10;
        binNo = binNo * 10 + lastDigit;
        revBinNo /= 10;
    }

    return binNo;
}

int main(){

    int decNo;
    cout << "Enter any decimal number = ";
    cin >> decNo;

    cout << decToBin(decNo) << endl;

    return 0;
}