// if else

#include <iostream>
using namespace std;

int main(){
    cout << "Enter your age : ";
    int age;
    cin >> age;

    if (age >= 18){
        cout << "can vote" << endl;
    } else {
        cout << "CANNOT vote" << endl;
    }

    // else if statement

    int marks = 85;

    if (marks >= 90){
        cout << "A" << endl;
    }else if (marks >= 80){
        cout << "B" << endl;
    }else {
        cout << "C" << endl;
    }

    // print largest of 3 numbers
    /*
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b){
        if (b > c){
            cout << a << " is largest" << endl;
        } else {
            if (c > a){
                cout << c << " is largest" << endl;
            }
        }
    } else {
        if (b > c){
            cout << b << " is largest" << endl;
        } else {
            cout << c << " is largest" << endl;
        }
    }
    */

    // ternary operator

    bool isAdult;
    isAdult = (age >= 18) ? true : false;
    cout << isAdult << endl;

    // switch statement

    int day = 2;
    switch (day){
        case 1: cout << "Monday" << endl;
        break;

        case 2: cout << "Tuesday" << endl;
        break;

        case 3: cout << "Wednesday";
        break;

        case 4: cout << "Thursday";
        break;

        case 5: cout << "Friday";
        break;

        case 6: cout << "saturday";
        break;

        case 7: cout << "Sunday";
        break;

        defaul : cout << "Invalid day";
    }
    
    // check whether a year is leap year or not.

    int year;
    cout << "Enter year : ";
    cin >> year;

    if (year % 400 == 0){
        cout << year << " is a leap year.";
    } else if (year % 100 == 0){
        cout << year << " is not a leap year.";
    } else if (year % 4 == 0){
        cout << year << " is a leap year.";
    } else {
        cout << year << " is not a leap year.";
    }

}