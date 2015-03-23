/*Program: Making use of Author and Book Class
Author: Ruby Shrestha
Date: 23rd March 2015*/


#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

int main(){
	
	string authorName, authorEmail, bookName;
	char authorGender;
	float bookPrice;
	int bookQty;
	
	cout << "Enter Author's Name: ";
	getline(cin, authorName);
	cout << "Enter Author's Email: ";
	cin  >> authorEmail;
	cout << "Enter Author's Gender: ";
	cin  >> authorGender;
	fflush(stdin);
	cout << "Enter Book's Name: ";
	getline(cin, bookName);
	cout << "Enter Book's Price: ";
	cin >> bookPrice;
	cout << "Enter Book's Stock Quantity: ";
	cin >> bookQty;
	
	Author a1(authorName, authorEmail, authorGender);
	Book b1(bookName, a1, bookPrice, bookQty);
	
	cout <<endl<< a1.toString() << endl << endl;
	cout << b1.toString();
}