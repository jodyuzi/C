#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


// # Friend Function

// A class ka member function ko B class ka friend banana

//class A {
//private:
//	void fun();
//};
//class B {
//	friend void A::fun(); // A class function ko B ka friend A:: banate
//	friend  class A; // A class ki all function B ka friend banate
//};
//
//void main() {
//
//}

// overloading of insertion and extraaction operator << >>

//class complex {
//private:
//	int a, b;
//public:
//	void setdata(int x, int y) {
//		a = x;
//		b = y;
//	};
//	void showdata() {
//		cout << "a =" << a << endl;
//		cout << "b =" << b << endl;
//	}
//	friend ostream& operator<<(ostream& out, complex c) {
//		out << "a =" << c.a << endl;
//		out << "b =" << c.b << endl;
//		return out;
//	}
//	friend istream& operator>>(istream& in, complex& c) {
//		in >> c.a >> c.b;
//		return in;
//	}
//}d1;
//void main() {
//	cout << "enter complex number a and b" << endl;
//	cin >> d1;
//	cout << "you entered complex number is" << endl;
//	cout << d1;
//}

// # friend function overloading # friend function ka matlab hota hai ki hum kisi function ko apne hisab se define kar sakte hai taki wo function humare class ke objects ke liye kaam kare.

//class complex {
//private:
//	int a, b;
//public:
//	void setdata(int x, int y) {
//		a = x;
//		b = y;
//	};
//	void showdata() {
//		cout << "a =" << a << endl;
//		cout << "b =" << b << endl;
//	};
//	friend complex operator+(complex, complex); // binary friend function declaration+	
//	friend complex operator-(complex); // unary friend function declaration
//};
//// binary
//complex operator+(complex X,complex B) { // Yha pe func ka name operator likhe kuch bhi likh sakte + - aise
//	complex temp;
//	temp.a = X.a + B.a;
//	temp.b = X.b + B.b;
//	return temp;
//};
//// unary
//complex operator-(complex X) {
//	complex temp;
//	temp.a = -X.a;
//	temp.b = -X.b;
//	return temp;
//};
//
//void main() {
//	complex c1, c2, c3,b1,b2;
//	// binary
//	c1.setdata(4, 5);
//	c2.setdata(6, 7);
//	c3 = c1 + c2; // as a friend c3=operator+(c1,c2); # ye bolte h
//	c3.showdata();
//	// unary
//	b1.setdata(4, 5);
//	b2 = -b1; //c2=b1.operator-();
//	b2.showdata();
//	b1.showdata();
//	system("pause");
//}


// # friend function can become a friend more than one class. # friend function can access private and protected members of

//class B; // forward declaration
//
//class A {
//private :
//	int a;
//public:
//	friend void fun(A,B); 
//	void setdata(int x) {
//		a = x;
//	}
//};
//
//
//class B {
//private:
//	int b;
//public:
//	friend void fun(A,B); 
//	void setdata(int y) {
//		b = y;
//	}
//};
//
//void fun(A o1,B o2) {
//	cout << "sum is " << o1.a + o2.b << endl;
//
//}
//
//void main() {
//	A obj1;
//	B obj2;
//	obj1.setdata(10);
//	obj2.setdata(5);
//	fun(obj1, obj2);
//	system("pause");
//}

// #Basic
 
 
//class complex {
//private:
//	int x = 10, y = 20;
//public:
//	void display() {
//		cout << "x = " << x << endl;
//		cout << "y = " << y << endl;
//	}
//	friend void fun(complex); // function declaration	
//};
//
//void fun(complex c) { // function definition
//	cout << "Inside friend function" << endl;
//	cout << "x+y=" << c.x + c.y << endl;
//
//}
//
//void main() {
//	complex c1, c2, c3;
//	system("cls");
//	c1.display();
//	fun(c1);
//	system("pause");
//}