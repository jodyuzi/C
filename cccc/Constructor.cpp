#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


// # Cunstructor Destructor  // jab constructor nhi banate to khud 2 constructor banata hai # default constructor and copy constructor

//class complex{
//private:
//	int a, b;
//public:
//	complex() // isko nhi banaye to compiler khud default constructor bana deta hai // if hum 1 bhi constructor banate hai to compiler default constructor nhi banata hai
//	{ 
//		// Default Constructor # constructor ka naam class ke naam ke sath same hota hai aur iska koi return type nahi hota hai
//		cout << "Constructor default called" << endl;
//	}
//
//	complex(int x,int y) {
//		cout << "contructor with 2 arguments called" << endl;
//		x = a;
//		y = b;
//	}
//	complex(int x) {
//		cout << "constructor with 1 argument called" << endl;
//		x = a;
//	}
//	// copy constructor # agar hum kisi object ko dusre object ke sath initialize karte hai to copy constructor call hota hai
//
//	complex(complex& x) { // yaha x me c2 ki value pass hogi agar & refrence variable nhi lagate to c2 call hoga us type constructor chalega aur ye recursion hoga infite isiliye & lagate hai taki c2 ke address pass ho jaye aur c2 ke andar c1 ke values copy ho jaye
//		cout << "copy constructor called" << endl;
//		a = x.a;
//		b = x.b;
//	}
//
//	// Destructor # destructor ka naam class ke naam ke sath same hota hai aur iska koi return type nahi hota hai aur iska naam class ke naam ke sath ~ lagake likhte hai
//	~complex() {
//		cout << "Destructor called" << endl;
//	}
//};
//void fun(){
//	complex c1; // default constructor call hoga and last me destructor call hoga
//	}
//
//void main() {
//	complex c1 = 5; // agar ek hee argument h to aise bhi likh sakte
//	complex c2(5, 6); // agar 2 argument h to aise bhi likh sakte
//	complex c3; // default constructor call hoga
//	/*complex c4=complex(2);*/ // aise bhi likh sakte but isme function call ho rha jaise sab ho rha ye kuch return nhi karta isiliye constructor function me return type nahi hota
//
//	// Copy constructor # agar hum kisi object ko dusre object ke sath initialize karte hai to copy constructor call hota hai
//
//	complex c5 = c2; // isme copy constructor call hoga c5(c2) # c5 ke andar c2 ke values copy ho jayenge
//	complex c6(c2); // isme bhi copy constructor call hoga c6 ke andar c2 ke values copy ho jayenge
//
//	// Destructor
//	fun();
//	system("pause");
//}