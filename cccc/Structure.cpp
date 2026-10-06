#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

// # C++ structure

//struct book {
//private:
//	int bookid;
//	char title[20];
//	float price;
//public:
//	void input() {
//		cout << "Enter book id: ";
//		cin >> bookid;
//		cout << "Enter book title: ";
//		cin.ignore();
//		cin.getline(title, 20);
//		cout << "Enter book price: "<<endl;
//		cin >> price;
//		if(bookid<0){
//			bookid = -bookid;
//		}
//	}
//	void display() {
//		cout << "Book id: " << bookid << endl;
//		cout << "Book title: " << title << endl;
//		cout << "Book price: " << price << endl<<endl;
//	}
//};
//
//int main() {
//	book b;
//	unsigned int x;
//	cout << "Enter a Negative number for testing unsigned:";
//	cin >> x;
//	cout << "value of x = " << x << endl<<"unsigned lagane se -8 = 8 positive nhi hota direct ye bhot bada positve number banata hai"<<endl;
//	system("pause");
//	/*b.bookid = -100;*/ // ye struct private hai to direct access nhi kar sakte
//	while (true) {
//		system("cls");
//		cout << "1. Input book details" << endl;
//		cout << "2. Display book details" << endl;
//		cout << "3. Exit" << endl;
//		cout << "Enter your choice: ";
//		int choice;
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			b.input();
//			break;
//		case 2:
//			b.display();
//			system("pause");
//			break;
//		case 3:
//			exit(0);
//		default:
//			cout << "Invalid choice!" << endl;
//		}
//	}
//	
//	/*b.input();
//	b.display();*/
//	return 0;
//}