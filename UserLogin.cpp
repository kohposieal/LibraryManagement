#pragma once
#include <iostream>

using namespace std; 

class Userlogin {
public:
	string username; 
	string userpassword; 
	
	void UserloginMenu() {

		
		system("cls");
		cout << "=============================================" << endl;
		cout << "                User Login                  " << endl;
		cout << "=============================================" << endl;
		cout << "User Name: ";
		cin >> userpassword;
		cout << "User Password: ";
		cin >> userpassword;
	}
};