#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char ch1 = 'a';
    char ch2 = 'A';
    char ch3 = '%';
    char ch4 = '9';
    char ch5 = '\n'; // for next line 

    cout << ch5;
    cout << (int)ch1 << endl;

    char ch = 'f';

    int pos = ch - ch1;
    cout << pos << endl;

    // character arrrays -- explicitly terminated by null character 

    char str[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << str << endl; // abcde♣ -- int array mein address aata tha but yha nhi aayega

    cout << str[0] << endl; // a
    cout << str[1] << endl;
    cout << str[2] << endl;
    cout << str[3] << endl;
    cout << str[4] << endl;
    
    char work1[] = {'c', 'o', 'd', 'e', '\0'};
    cout << sizeof(work1) / sizeof(char) << endl; // 5
    cout << work1 << endl; // code
    cout << work1[4] << endl; // nothing will be printed

    char work2[5] = {'c', 'o', 'd', 'e', '\0'};
    cout << work2 << endl;

    char work3[5] = "code";
    cout << work3 << endl;

    char work4[50] = {'c', 'o', 'd', 'e', '\0'};
    cout << work4 << endl; // code
    cout << strlen(work4) << endl; // 4 -- bcoz array length is 5 not string.


    return 0;
}