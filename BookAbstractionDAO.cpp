#pragma once 
#include <iostream>

using namespace std; 

class BookAbstractionDAO {
private:
	int Bookid;
	string Title;
	int Quantity;
public:
	virtual void Addbook() = 0;
	virtual void Showbook()=0; 
};