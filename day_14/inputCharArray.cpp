#include<iostream>
#include<cstring>
using namespace std;

int main(){
    /*
    char word[30];
    cin >> word; // ignore anything written after white space. // input -- sunny kumar

    cout << "Your word was : " << word << endl; // sunny
    cout << "length = " << strlen(word) <<endl; // 5
    */

    char sentence[50];
    cin.getline(sentence, 50);

    cout << "Your sentence was : " << sentence << endl;
    cout << "length = " << strlen(sentence) <<endl;

    /*
    cin.getline(sentence, 50, '*')-- here * is delimmiter which means after suppose you are writing a sentence and there is * in between sentence so after * all those words will be ignored
    */
    return 0;
}