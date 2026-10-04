#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std; // Haan, std:: nahi lagana hai to upar using namespace std; likh do.

// # Default Arguments function 

/*int add(int x, int y, int z = 0);*/ // Default argument is a value that is passed to a function when no value is provided for that parameter. It allows the function to be called with fewer arguments than it is defined to accept. Default arguments are specified in the function declaration and can be used to provide default values for parameters that are not explicitly passed by the caller.)

//int add(int x, int y=0, int z = 0); // 0 yani defualt jaha se set karenge waha se right me sabme 0 lagana pade taki hum kahi tareeke se function call krke value pass kr sake
//void main() {
//	int x, y, z;
//	cout << "Enter two numbers: " << endl;
//	cin >> x >> y;
//	cout << "sum of " << x << " and " << y << " is " << add(x, y) << endl;
//	cout << "Enter three numbers: " << endl;
//	cin >> x >> y >> z;
//	cout << "sum of" << x << "and" << y << "and" << z << "is" << add(x, y, z) << endl;
//}
//
//int add(int x, int y, int z) {
//	return(x + y + z);
//}