#include<iostream>
#include<climits>
#include<cstring>
using namespace std;

void reverseWord(char word[], int n){
    int start = 0, end = end-1;
    while (start < end){
        swap(word[start++], word[end--]);
    }
}

int main(){
    char word[] = "code";

    cout <<"word = " << word << endl;
    
    reverseWord(word, strlen(word));

    cout << "reverse word = " << word << endl;

    return 0;
}