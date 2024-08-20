#include<iostream>
using namespace std;

class Student {
    int rollNo;
    int LId;
    
public:
    string name;
    string city;
    
    void details(){
        cout << "Enter roll no : ";
        cin >> rollNo;
        cout << "your roll no is : " << rollNo << endl;
        
        cout << "Enter Id : ";
        cin >> LId;
        cout << "your library Id is : " << LId << endl;

        cout << "Enter Name : ";
        cin >> name;
        cout << "your Name : " << name << endl;

        cout << "Enter City : ";
        cin >> city;
        cout << "your city : " << city << endl;
    }
};

int main(){
    Student s1;
    s1.details();
    cout << s1.name << endl;
    cout << s1.city;
    return 0;
}