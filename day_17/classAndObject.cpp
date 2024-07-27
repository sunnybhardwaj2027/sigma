#include<iostream>
using namespace std;

class Student {
    // properties/attributes
    string name;
    float cgpa;

    // function/methods
    void getPercentage(){
        cout << (cgpa * 10) << "% \n";
    }
};

class User {
    // properties
    int id;
    string username;
    string password;
    string bio;

    // methods
    void deactive(){
        cout << "deleting account\n";
    }

    void editBio(string newBio){
        bio = newBio;
    }

};

int main(){
    // objects
    Student s1; 
    cout << sizeof(s1) << endl; // 28 byte is for s1 object

    User sunny;
    cout << sizeof(sunny) << endl; // 76

    return 0;
}