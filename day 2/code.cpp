// boilerplate in c++ lang

#include <iostream>
#define PI 3.14
using namespace std;

int main(){
    cout<<"apna college"<<endl;
    cout<<PI<<endl;
    std::cout<<"sunny bhardwaj"<<endl; // kyuki hmne upar hi using namespace std likh rakha hai to ye likhne ki jarurat nhi pdti agar hm koi external library le aaye to krna pdega.

    cout << "****\n***\n**\n*\n";

    int a = 5;
    int b = 10;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    int x = 23.4; // this is basically 23.
    cout << x<<endl;

    // input in c++

    int age;
    cout << "Enter  your age: ";
    cin >> age;

    cout << "your age is "<< age << endl;

    float eng, sci, math;

    cout << "Enter your english marks : ";
    cin >> eng;

    cout << "Enter your science marks : ";
    cin >> sci;

    cout << "Enter your math marks : ";
    cin >> math;

    float avg = (eng + sci + math)/3;
    cout << "your average marks is : " << avg << endl;

    return 0;

}
