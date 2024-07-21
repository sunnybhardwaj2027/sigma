#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[50];
    // str = "apna college"; -- error

    // strcpy(des, src) -- to copy string from src to des.
    strcpy(str, "apnacollege");
    cout << str << endl;

    // strcat(str1, str2) -- to concatenate/join str1 to str2 -- that will be stored in str1 and str1 will be remained same.

    char str1[50] = "hello ", str2[50] = "world";
    strcat(str1, str2);
    cout << str1 << endl; // hello world
    cout << str2 << endl; // world

    // strcmp(str1, str2) -- compare 2 strings based on there values(-ve, 0, +ve)
    cout << strcmp("mango", "x") << endl; // -1 -- because 'mango' is small
    cout << strcmp("x", "mango") << endl; // 1
    cout << strcmp ("mango", "mango") << endl; // 0
    return 0;
}