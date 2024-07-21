#include<iostream>
#include<string>
using namespace std;

int main(){
    // str.length()
    string str = "apna college";
    cout << str.length() << endl; // 12

    // str.at(idx) -- it will return char at that idx
    cout << str[2] << endl;
    cout << str.at(2) << endl;

    // str.substr(startIdx, size) -- starting index se utne size ka chagiye
    cout << str.substr(5, 7) << endl; // college

    string str2 = "i love c++ and java. i don't like c++";
    // str.find(word)
    cout << str2.find("c++") << endl; // return first occurence of that word. // 7
    cout << str2.find("c++", 15) << endl; // now it will check from idx 15 // 34

    cout << str2.find("python") << endl; // 4294967295 -- this unsigned int value but we want int
    
    int idx = str2.find("python");
    cout << idx << endl; // -1

    return 0;
}