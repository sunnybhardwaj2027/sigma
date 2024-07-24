#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4};
    cout << "size = " << vec.size() << endl; // 4
    cout << "capacity = " << vec.capacity() << endl; // 4

    vec.push_back(5); // add 5 in the last
    cout << "size = " << vec.size() << endl; // 5
    cout << "capacity = " << vec.capacity() << endl; // 8

    vec.pop_back(); // deleted last element
    cout << "size = " << vec.size() << endl; // 4
    cout << "capacity = " << vec.capacity() << endl; // 8

    return 0;
}