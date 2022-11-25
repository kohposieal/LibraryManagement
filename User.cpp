#pragma once
#include <iostream>

using namespace std; 

class User {
    
private:
    string UserPassword; 
    string UserName; 
public:
    int i = 1; 
    User() :UserName("Unknown"), UserPassword("Unknown") {}
    User(string UserName, string UserPassword) :UserName(UserName), UserPassword(UserPassword) {}

    //setter and getter methods
    string getUserpassword() {
        return UserPassword;
    }
    void setUserpassword(string UserPassword) {
        this->UserPassword = UserPassword;
    }
    string getUsername() {
        return UserName;
    }
    void setUsername(string UserName) {
        this->UserName = UserName;
    }
    void CreatUser() {
        system("cls");
        cout << "=============================================" << endl;
        cout << "        Create User Name and Password        " << endl;
        cout << "=============================================" << endl;
        cout << "Please Enter User Name: ";
        cin >> UserName;
        cout << "Please Enter Password: ";
        cin >> UserPassword;

    }
    void displayUser() {

        cout <<"User Name: " << UserName<<endl;
       
    }
    
};