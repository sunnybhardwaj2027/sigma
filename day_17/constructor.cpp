#include<iostream>
using namespace std;

class Car {
    string name;
    string color;

public:

    // multiple constructor is possible -- consotructor overloading -- constructor is being called according to parameters.
    // non parameterized constructor
    Car(){ // no return type for constructor
        cout << "constructor is called. object is being created..\n";
        cout << "not parameterized constructor is called.\n";
    }

    // parameterized constructor
    Car(string nameVal, string colorVal){
        cout << "consturctor is called. object is being created..\n";
        cout << "parameterized constructor is called.\n";
        name = nameVal;
        color = colorVal;
    }

    void start(){
        cout << "car has started..\n";
    }
    
    void stop(){
        cout << "car has stopped..\n";
    }

    //getters
    string getName(){
        return name;
    }
};

int main(){
    Car c1; /* constructor is called. object is being created..
not parameterized constructor is called. */

    Car c2("maruti 800", "white"); /*  output -- consturctor is called. object is being created..
parameterized constructor is called. */
    cout << c2.getName() << endl; // output -- maruti 800
    return 0;
}