#include<iostream>
using namespace std;

void nStarDiamond(int n) {
    // upper pyramid
    
    for (int i = 1; i <= n; i++){
        //spaces
        for (int j = i; j < n; j++){
            cout << " ";
        }
        // star
        for (int j = 1; j < 2*i-1; j++){
            cout << "*";
        }

        cout << endl;
    }

    // lower pyramid
    for (int i = n; i > 0; i--){
        // spaces
        for (int j = n; j > i; j--){
            cout << " ";
        }
        // star
        for (int j = 1; j <= 2*i-1; j++){
            cout << "*";
        }

        cout << endl;
    }
}


int main(){
    int n;
    cin >> n;
    nStarDiamond(n);
    return 0;
}