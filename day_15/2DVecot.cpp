#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <vector<int>> matrix1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < matrix1.size(); i++) {
        for (int j = 0; j < matrix1[i].size(); j++){
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // note-- in case of 2d vectors no of column for every row can be different which was not possible for 2d array.

    vector <vector<int>> matrix2 = {{1, 2, 3}, {4, 5}, {6}};

    for (int i = 0; i < matrix2.size(); i++) {
        for (int j = 0; j < matrix2[i].size(); j++){
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // predict the output
    vector <int> vec;
    for (int i = 0; i < 5; i++){
        vec.push_back(i);
        cout << "size = " << vec.size() << endl;
        cout << "capacity = " << vec.capacity() << endl;
        cout << endl;
    }

    return 0;
}