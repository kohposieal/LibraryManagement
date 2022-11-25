#pragma once
#include <iostream>
#include <string>
#include "User.cpp"


using namespace std; 

class UserMgt{
private:
	int num;
	string username;
	string userpassword; 
	User users [50];
	
	
	
	

	

public:
	int i = 1; 
	int count = 0; 

	
	void setUsername(string username) {
		this->username = username;

	}
	string getUsername() {
		return username;
	}

	void setUserpassword(string userpassword) {
		this->userpassword = userpassword;
	}

	string getUserpassword() {
		return userpassword;
	}
	
	void AddUser(User user) {
		users[count] = user;
		count++;
	}
	void viewAllUsers() {
		for (int i = 0; i < count; i++) {
			users[i].displayUser();

		}
	}
	int findUserByName(string name) {
		for (int i = 0; i < count; i++) {
			if (users[i].getUsername() == name) {
				return i;
			}
		}
		return -1;
	}
	User* getUserByName(string name) {
		User* user = nullptr;
		for (int i = 0; i < count; i++) {
			if (users[i].getUsername() == name) {
				
					users[i].displayUser();
					cout << "User Name: " << endl;
				
				return &users[i];
			}
		}
		return user;
	}
	
	void editUserName(string name) {
		string userName;
		int found = findUserByName(name);
		if (found != -1) {
			cout << "Enter new User Name: ";
			cin >> userName;
			users[found].setUsername(userName);
			cout << "username has been updated" << endl;
		}
		else {
			cout << "not found" << endl;
		}
	}
	void editUserPassword(string name) {
		string password;
		int found = findUserByName(name);
		if (found != -1) {
			cout << "Enter new password: ";
			cin >> password;
			users[found].setUserpassword(password);
			cout << "password has been updated" << endl;
		}
		else {
			cout << "not found" << endl;
		}
	}
	void deleteUser(string name) {
		int found = findUserByName(name);
		if (found != -1) {
			for (int i = found; i < count; i++) {
				users[i] = users[i + 1];
			}
			count--;
			cout << "User has been deleted" << endl;
		}
		else {
			cout << "Not found" << endl;
		}
	}
	void searchUser(string name) {
		int found = findUserByName(name);
		if (found != -1) {
			for (int i = found; i < count; i++) {
				users[i].displayUser();
			}
		}
		else {
			cout << "not found" << endl;
		}
	}
	User* authenticateUser(string username, string password) {
		User* user = nullptr;
		for (int i = 0; i < count; i++) {
			if (users[i].getUsername() == username && users[i].getUserpassword() == password) {
				return &users[i];
			}
		}
		return user;
	}
	
	

};