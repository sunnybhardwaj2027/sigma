#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "apnacollege";

    // for loop
    for (int i = 0; i < str.length(); i++){
        cout << str[i] << "-";
    }
    cout << endl;

    // for each loop

    for (char ch : str){
        cout << ch << ",";
    }
    return 0;
}