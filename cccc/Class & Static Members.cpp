#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class book{
private: // by default private hota hai class me
	int a, b; // instance variable # object ke andar alag alag value store hoti hai
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

	// # Static Members
private:
	static float  x; // # class variable # class ke andar static member variable ko define karte waqt static keyword lagate hai
public:
	static void setx(float a) { // static function kehte hai ki ye function class ke object ke bina bhi call kiya ja sakta hai
		x = a;
		cout << endl << "x = " << x << endl;
	}
};
float book::x = 0; // # definition, value automatically 0 initialize hoga kyuki static variable hai # class variable ko define karte waqt class ka naam likhna padta hai

void book::display() { // ye function class ke bahar define kiya hai // isiliye class ke bahar define karte waqt class ka naam likhna padta hai
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
void fun(); // function declaration
void main() {
	system("cls");
	fun();
	book c1, c2;
	c1.setx(3.2f); // bina class ke object ke bhi static function ko call kar sakte hai
	/*book::x = 4.5f;*/ // #private h access nhi kr sakte # class variable ko access karte waqt class ka naam likhna padta hai
	book::setx(4.5f); // # class variable ko access karte waqt class ka naam likhna padta hai
	system("pause");
}


void fun() {
	book c1, c2, c3;
	c1.setData(4, 5);
	c1.display();
	c2.setData(6, 7);
	c2.display();
	c3 = c1.add(c2);
	c3.display();
}