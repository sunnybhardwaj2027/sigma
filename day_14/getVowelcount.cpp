#include<iostream>
#include<string>
using namespace std;

int getVowelCount(string str){
    int vowCount = 0;
    for (int i = 0; i < str.length(); i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            vowCount++;
        }
    }

    return vowCount;
}

int main(){
    string str;
    getline(cin, str);

    int vowelCount = getVowelCount(str);
    cout << "small letter vowel = " << vowelCount << endl;

    return 0;
}