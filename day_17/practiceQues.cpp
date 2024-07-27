/*
Create a User class with properties : id(private), username(public) & password(private).
its id should be initialized in a parameterised constructor.
it should have a getter and setter for password.
*/

#include<iostream>
#include<string>
using namespace std;

class User {
private:
    int id;
    string password;

public:
    string username;

    User(int id){
        this->id = id;
    }

    // setter
    void setPassword (string password){
        this->password = password;
    }

    string getPassword (){
        return password;
    }

};

int main(){
    User user1(101);
    user1.username = "shradha";
    user1.setPassword("abcd");

    cout << "username : " << user1.username << endl;
    cout << "password : " << user1.getPassword() << endl;
    return 0;
}