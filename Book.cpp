#pragma once 
#include <iostream>
#include <fstream>

using namespace std; 

class Book {
private: 
	string bookid;
	string title;
	string author;
	string ISBN;
	int publication;
	int quantity; 
	string borrowdate; 
	string returndate; 
	int Bookmgtnum; 

public: 
	Book(): bookid("Unknown"),title("Unknown"), author("Unknown"), ISBN("Unknown"), publication(0),quantity(0), borrowdate("Unknown"), returndate("Unknown") {}
	Book(string bookid, string title, string author, string ISBN, int publication,int quantity, string borrowdate, string requestdate) : bookid(bookid), title(title), author(author), ISBN(ISBN), publication(publication),quantity(quantity), borrowdate(borrowdate), returndate(returndate) {}

	~Book()  {

	};
	void setBookid(string bookid) {
		this->bookid = bookid; 
	}
	string getBookid() {
		return bookid; 
	}
	void setTitle(string title) {
		this->title = title; 
	}

	string getTitle() {
		return title; 
	}

	void setAuthor(string author) {
		this->author = author; 
	}
	string getAuthor() {
		return author; 
	}

	void setISBN(string ISBN) {
		this->ISBN = ISBN; 
	}
	string getISBN() {
		return ISBN;
	}
	void setPublication(int publication) {
		this->publication = publication;
	}

	int getPublication() {
		return publication;
	}

	void setBorrowdate(string borrowdate) {
		this->borrowdate = borrowdate; 
	}
	string getBorrowdate() {
		return borrowdate; 
	}
	void setReturndate(string returndate) {
		this->returndate = returndate;

	}
	string getReturndate() {
		return returndate; 
	}

	void setQuantity(int quantity) {
		this->quantity = quantity; 
	}
	int getQuantity() {
		return quantity; 
	}

	
	void AddBookMenu() {

		system("cls");
		cout << "=============================================" << endl;
		cout << "			      Add New Book                " << endl;
		cout << "=============================================" << endl;
		cout << "Please Enter Book ID: ";
		cin >> bookid;
		cout << "Please Enter Book Title: ";
		cin >> title;
		cout << "Please Enter Author Name: ";
		cin >> author;
		cout << "Please Enter Publication: ";
		cin >> publication;

		
	}

	void Addbook() {
		Book book;
		ofstream fout;
		fout.open("BookManagement.dat", ios::binary | ios::out | ios::app);
		book.AddBookMenu();
		fout.write((char*)&book, sizeof(book));
		fout.close();
		cout << "\n\nData Successfully Saved to File....\n";
	}

};

