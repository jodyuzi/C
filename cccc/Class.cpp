#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class book{
private: // by default private hota hai class me
	int a, b;
public:
	void setData(int x, int y) {
		a = x;
		b = y;
	}
	book add(book c) {
		book temp; // ye temp object ke andar a aur b ka sum store hoga
		temp.a = a + c.a;
		temp.b = b + c.b;
		return (temp); // ye temp object return hoga)
	}

	void display();	// class ke bahar define kiya hai isiliye sirf function ka naam likha hai kind of declaration
};

void book::display() { // ye function class ke bahar define kiya hai // isiliye class ke bahar define karte waqt class ka naam likhna padta hai
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

void main() {
	system("cls");
	book c1,c2,c3;
	c1.setData(4, 5);
	c1.display();
	c2.setData(6, 7);
	c2.display();
	c3 = c1.add(c2); 
	c3.display();
	system("pause");
}