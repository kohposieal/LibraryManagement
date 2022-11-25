#pragma once
#include <iostream>
#include "BookAbstractionDAO.cpp"
#include "Book.cpp"

using namespace std; 

class BookMgt: public Book,BookAbstractionDAO{

private: 
	
public: 
	void Addbook() {

	}
	void Showbook() {

	}
};