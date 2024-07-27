#include<iostream>
using namespace std;

class Car {
    string name;
    string color;

public:
    
    Car(string name, string color){
        cout << "consturctor is called. object is being created..\n";
        /*
        name = name;
        color = color;
        */ 
       // compiler can't understand which name is for what purpose -- for that reason we use this
       // this is speacial pointer in c++ that points to the current object. (this->prop or *this.prop both are same)

       this->name = name; // here is this is pointing towards c1
       this->color = color;
    }

    void start(){
        cout << "car has started..\n";
    }
    
    void stop(){
        cout << "car has stopped..\n";
    }

    // getters
    string getName(){
        return name;
    }

    string getColor(){
        return color;
    }

    
};

int main(){
    Car c1("maruti 800", "white");
    cout << "name = " << c1.getName() << endl;
    cout << "color = " << c1.getColor() << endl;
    
    return 0;
}