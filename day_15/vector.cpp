#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec1;
    cout << vec1.size() << endl; // 0

    vector<int> vec2 = {1, 2, 3, 4};
    cout << vec2.size() << endl; // 4
    
    vector<int> vec3(10, -1);
    cout << vec3.size() << endl; // 10-- size of 10 value of each is -1

    for (int i = 0; i < vec3.size(); i++){
        cout << vec3[i] << " "; // -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
    }

    cout << endl;
    return 0;
}