#include <iostream>
using namespace std;

int reverseNum (int num){
    int reverseNo = 0;
    while (num > 0){
        int lastDigit = num % 10;
        reverseNo = reverseNo*10 + lastDigit;
        num = num / 10;
    }

    return reverseNo;

}

bool isPalindrome(int num){
    int reverse = reverseNum(num);
    if (reverse == num){
        return true;
    } else {
        return false;
    }
}


int main(){
    int num;
    cin >> num;

    cout<< isPalindrome(num) << endl;

    return 0;
}
