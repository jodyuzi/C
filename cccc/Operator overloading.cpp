#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


// operator overloading # operator overloading ka matlab hota hai ki hum kisi operator ko apne hisab se define kar sakte hai taki wo operator humare class ke objects ke liye kaam kare.
// Operator overloading ka use mainly class ke objects ke liye hota hai jaha hum chahte hai ki wo operator humare class ke objects ke liye kaam kare. 
// Operator overloading ka use karte waqt hume ye dhyan rakhna padta hai ki hum sirf existing operators ko overload kar sakte hai aur naye operators create nahi kar sakte hai. 
// Operator overloading ka use karte waqt hume ye dhyan rakhna padta hai ki hum sirf existing operators ko overload kar sakte hai aur naye operators create nahi kar sakte hai.


//class complex {
//private:
//	int a, b;
//public:
//	void setdata(int x, int y) {
//		a = x;
//		b = y;
//	}
//	void showdata() {
//		cout << "a =" << a << endl;
//		cout << "b =" << b << endl;
//	}
//	complex operator+(complex c) { // Yha pe func ka name operator likhe kuch bhi likh sakte + - aise
//		complex temp;
//		temp.a = a + c.a;
//		temp.b = b + c.b;
//		return temp;
//	}
//	complex operator -() {
//		complex temp;
//		temp.a = -a;
//		temp.b = -b;
//		return temp;
//	}
//};
//
//class integer {
//private:
//	int x;
//public:
//	void setdata(int a) {
//		x = a;
//	}
//	void showdata() {
//		cout << "x =" << x << endl;
//	}
//	integer operator++() { // pre increment
//		integer temp;
//		temp.x = ++x; // pre increment
//		return temp;
//	}
//	integer operator++(int) { // post increment
//		integer temp;
//		temp.x = x++; // post increment
//		return temp;
//	}
//
//}inte1,inte2,inte3;
//
//void main() {
//	complex c1, c2, c3,c4,c5;
//	c1.setdata(4, 5);
//	c2.setdata(6, 7);
//	// binary operator overloading
//
//	/*c3 = c1.add(c2);*/ // old call
//	/*c3 = c1.operator+(c2);*/ // ish tareeke se bhi likh sakte + ke pehle operator likhna hogi tabhi call hoga
//	c3 = c1+c2; // c1 + func call ho rha uske andar c2 ki value pass ho rhi
//	// dusra tareeka kamal ka isme . dot nhi likhna padta direct operator ya function ka naam + - jo h dirct likh sakte 
//	c3.showdata();
//
//	// unary operator overloader
//	/*c4 = c3.operator-();*/
//	c4 = -c3; // - pehle lagate kyuki ye unary operator ka behavior h and binary me a+b hota h isiliye bich me likhte # c3 = c1+c2;
//	c4.showdata();
//
//	// unary # ++ increment operator pre and post
//
//	inte1.setdata(3);
//	inte1.showdata();
//	inte2 = ++inte1; // post increment # pehle value assign ho rhi and fir increment ho rhi
//	inte1.showdata();
//	inte2.showdata();
//	inte3 = inte2++; // post increment # pehle value assign ho rhi and fir increment ho rhi
//	inte2.showdata();
//	inte3.showdata();
//	system("pause");
//}