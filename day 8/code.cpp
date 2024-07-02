// binary number system 

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

    cout << "int = " << sizeof(int) << endl;
    cout << "short int = " << sizeof(short int) << endl;
    cout << "long int = " << sizeof(long int) << endl;
    cout << "long long int = " << sizeof(long long int) << endl;

    cout <<"double = "  << sizeof (double) << endl;
    cout <<"long double = " << sizeof (long double) << endl;

    


    int binNum;
    cout << "Enter any binary number = ";
    cin >> binNum;

    binToDec(binNum);

    
    return 0;
}