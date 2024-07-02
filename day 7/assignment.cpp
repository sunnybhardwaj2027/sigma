
#include <iostream>
using namespace std;

// Question 1 : Write a function to check if a number is a palindrome in C++. (121 is a palindrome, 321 is not)

/*
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

*/

// Question 2 : Write a function to calculate the sum of digits of a number

/*

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

*/

// Question 3 : Write a function which takes 2 numbers as parameters (a & b) and outputs : a^2 + b^2 + 2*ab.

/*
int square(int a, int b){
    return a*a + b*b + 2*a*b;
}

int main(){
    int num1, num2;

    cin >> num1 >> num2;

    cout << "square of two numbers "<< num1 << " and " << num2 << " = " << square(num1, num2) << endl;
    return 0;
}

*/

// Question 4 : Write a function that prints the largest of 3 numbers.

/*

int largest(int a, int b, int c){
    if (a > b){
        if (a > c){
            return a;
        } else {
            return c;
        }
    } else {
        if (b > c){
            return b;
        } else {
            return c;
        }
    }
}

int main(){

    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    cout << "largest(" << num1 << "," << num2 << "," << num3 << ")" << " = " << largest(num1, num2, num3) << endl;

    return 0;
}
*/

// Question 5 : Write a function that accepts a character (ch) as parameters & returns the character that occurs after ch in the English alphabet. Eg : input = ‘c’, return value = ‘d’

/*

char nextChar(char ch){
    ch = ch + 1;

    return ch;
}

int main(){

    char ch;
    cin >> ch;

    cout << "Next character = " << nextChar(ch) << endl;

    return 0;
}

*/


