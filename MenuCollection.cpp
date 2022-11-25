#pragma once
#include <iostream>
#include "User.cpp"
#include "UserMgt.cpp"
#include "Book.cpp"
using namespace std;

class MenuCollection {
private:
	
	int num; 
	UserMgt usermgt;
	int Bookmgtnum;
public:
	void BookMgtMenu() {
		Book book;
		system("cls");
		cout << "=============================================" << endl;
		cout << "			      Book Management             " << endl;
		cout << "=============================================" << endl;
		cout << "1. Add New Book";
		cout << "2. Delete Book ";
		cout << "3. Update Book ";
		cout << "4. Display Books ";
		cout << "5. Sort Books";
		cout << "6. Search Books";
		cout << "7. Save Data";
		cout << "8. Load Data";
		cout << "9. Exit";
		cout << "=============================================" << endl;
		cout << "Please type (1-9) to choose option: ";
		cin >> Bookmgtnum;

		switch (Bookmgtnum) {
		case 1:
			book.Addbook();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;

		}
	}
	virtual void UserMgtMenu() {
		User user;
		

		cout << "=============================================" << endl;
		cout << "               User Management               " << endl;
		cout << "=============================================" << endl;
		cout << "1. Create User Name and Password" << endl;
		cout << "2. Delete " << endl;
		cout << "3. Modify " << endl;
		cout << "4. Show " << endl;
		cout << "5. Short" << endl;
		cout << "6. Save" << endl;
		cout << "7. Load" << endl;
		cout << "8. Return to User and Library Management System" << endl;
		cout << "9. Exit" << endl;
		cout << "=============================================" << endl;
		cout << "Please type (1-9): ";
		cin >> num;
		switch (num) {
		case 1:
			
			user.CreatUser();
			usermgt.AddUser(user);

		case 2:
			
			
			break;
		case 3:
			break;
		case 4:
			usermgt.viewAllUsers();
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			exit(9);

		default:
			cout << "Please try again";

		}
		UserMgtMenu();

	}
};