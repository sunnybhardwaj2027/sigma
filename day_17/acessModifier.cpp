#include<iostream>
using namespace std;

class Student {
private: // not necessary to write private bcoz all the properties and function are by default private if you didn't made them public.
    string name;

public:
    float cgpa;

    void getPercentage(){
        cout << (cgpa * 10) << "% \n";
    }
};

int main(){
    Student s1;
    // s1.name = "shradha"; -- error -- name' is private within this context
    s1.cgpa = 9.0;
    cout << "cgpa = " << s1.cgpa << endl; // 9

    return 0;
}

