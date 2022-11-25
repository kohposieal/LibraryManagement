#pragma once
#include <iostream>

using namespace std; 

class AdminMgt {

private: 
	string AdminName; 
	string AdminPassword; 
	string UserPassword;
	string UserName;
	

public: 
	AdminMgt() : AdminName("Unknown"), AdminPassword("Unknown"), UserPassword("Unknown"), UserName("UserName") {}
	AdminMgt(string AdminName, string AdminPassword, string UserName, string UserPassword) :AdminName(AdminName), AdminPassword(AdminPassword), UserName(UserName),UserPassword(UserPassword) {}

	~AdminMgt() {

	}
	void setAdminname(string AdminName) {
		this->AdminName = AdminName;
	}
	string getAdminname() {
		return AdminName;
	}
	void setAdminpassword(string AdminPassword) {
		this->AdminPassword = AdminPassword;
	}
	string getAdminpassword() {
		return AdminPassword;
	}

	void AdminMenu() {
		
		cout << "============================================="<<endl;
		cout << "                Admin Login                  "<<endl;
		cout << "=============================================" << endl;
		cout << "Admin Name: ";
		cin >> AdminName;
		cout << "Admin Password: ";
		cin >> AdminPassword;
	
	}
	
	
	
	
};