#include<iostream>
#include<cstring>
using namespace std;

bool validPalindrome(char word[], int n){
    int start = 0, end = n-1;
    while (start < end){
        if (word[start] != word[end]){
            cout << "Not palindrome!" << endl;
            return false;
        }
        start++;
        end--;
    }

    cout << "palindrome!" << endl;
    return true;
}

int main(){
    char word[] = "racecar";

    validPalindrome(word, strlen(word));

    return 0;
}