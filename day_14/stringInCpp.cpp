/*
string in c++

1. c++ strings are opbjicts of pre-defined 'string' class in STL 

2. c++ strings have useful member functions.

3. c++ strings ar dynamic(their size can change at run time).

4. c++ strings support operators like +, ==, >, < etc.

5. c++ strings are stored contigrously in memory.
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    str = "hello"; // this was not allowed in case of char array.

    cout << str << endl; // hello
    str = "yellow"; 
    cout << str << endl; // yellow

    /*
    string str2;
    cin >> str2; // same as char array here also after white space whatever is written is going to ignored.
    cout << str2 << endl;
    */

   string str2;
   getline(cin, str2); // you can aslo give delimitter but there is difference between this function while using for char array and string object.
   cout << str2 << endl;

    // you can also access each element of string by indexing
    return 0;
}