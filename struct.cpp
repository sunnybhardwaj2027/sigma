#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
};

union SimpleStudent {
    int rollNo;
    char name[50];
};

class newStudent {
    string name;
    int rollNo;

public:
    string city;
    int Lid;
};

int main() {
    
    Student s1;
    cout << "Enter roll No(using struct): ";
    cin >> s1.rollNo;
    cin.ignore();
    
    cout << "Enter your name(using struct): ";
    getline(cin, s1.name);

    cout << "\nStruct Output:" << endl;
    cout << "Roll No: " << s1.rollNo << endl;
    cout << "Name: " << s1.name << endl;

    
    SimpleStudent s2;
    cout << "\nEnter roll No (using union): ";
    cin >> s2.rollNo;
    cin.ignore();

    
    cout << "Enter your name (using union): ";
    cin.getline(s2.name, 50);

    cout << "\nUnion Output:" << endl;
    
    cout << "Roll No: " << s2.rollNo << endl;
    cout << "Name: " << s2.name << endl; 

    newStudent s3;
    cout << "\nusing class\n";
    cout << "enter your city: ";
    getline(cin, s3.city);
    
    cout << "enter your library id: ";
    cin >> s3.Lid;
    
    cout << "\nclass output\n";
    cout << "City: " << s3.city << endl;
    cout << "library id: " << s3.Lid << endl;

    return 0;
}
