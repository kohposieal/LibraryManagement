#pragma once 
#include <iostream>
#include "AdminMgt.cpp"
#include "UserMgt.cpp"
#include "LibrarySystem.cpp"
#include "MenuCollection.cpp"

using namespace std;

class UsernLibrary : public AdminMgt,public UserMgt,  public LibrarySystem{




public: 
	int UsernLibrarynum; 
	AdminMgt adminmgt1;
	UserMgt usermgt;
	MenuCollection menu; 
	void UsernLibraryMenu() {
		system("cls");
		cout << "=============================================" << endl;
		cout << "                User and Library             " << endl;
		cout << "=============================================" << endl;
		cout << "1. User Management" << endl;
		cout << "2. Library Management" << endl;
		cout << "3. Exit" << endl;
		cout << "=============================================" << endl;
		cout << "Please type (1-3) to choose option: ";
		cin >> UsernLibrarynum;

		switch (UsernLibrarynum) {
		case 1:
			menu.UserMgtMenu();
			break;
		case 2:
			LibrarySystemMenu();
			break;
		case 3:
			exit(3);
			break;

		}
	}
	
	
};