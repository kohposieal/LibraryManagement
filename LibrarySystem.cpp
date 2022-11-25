#pragma once
#include <iostream>
#include "BookMgt.cpp"


using namespace std; 

class LibrarySystem :public BookMgt{
private:

public: 
	Book book; 
	void LibrarySystemMenu() {
		int LibrarySystemNum;

		system("cls");
		cout << "=============================================" << endl;
		cout << "                Library System               " << endl;
		cout << "=============================================" << endl;
		cout << "1. Librarian Book Management" << endl;
		cout << "2. Exit" << endl;
		cout << "=============================================" << endl;
		cout << "Please type (1-2) to choose option: ";
		cin >> LibrarySystemNum;

		switch (LibrarySystemNum) {
		case 1:
			book.Addbook();
			break;
		case 2:
			exit(2);
			break;

		}
	}
		
	
};