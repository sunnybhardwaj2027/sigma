#include<iostream>
#include<cstring>
using namespace std;

void toUpper(char word[], int n){
    for (int i = 0; i < n; i++){
        if (word[i] >= 'A' && word[i] <= 'Z'){
            continue;
        } else {
            char ch = word[i];
            word[i] = ch - 'a' + 'A';
        }
    }
}

int main(){
    char word[] = "ApPle";
    toUpper(word, strlen(word));

    cout << word << endl;

    return 0;
}

