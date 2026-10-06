#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>

// # Function Overloading

// # Function overloading is a feature in C++ that allows you to define multiple functions with the same name but different parameter lists. The compiler determines which function to call based on the number and types of arguments passed to the function. This allows you to create functions that perform similar tasks but with different input types or numbers of parameters.

//int  area(int radius);
//int area(int length, int breadth);
//
//void main() {
//	int radius, length, breadth;
//	std::cout << "Enter the radius of the circle: ";
//	std::cin >> radius;
//	std::cout << "Area of the circle is: " << area(radius) << std::endl;
//	std::cout << "Enter the length and breadth of the rectangle: ";
//	std::cin >> length >> breadth;
//	std::cout << "Area of the rectangle is: " << area(length, breadth) << std::endl;
//	system("pause");
//}
//
//int area(int radius) {
//	return (3.14 * radius * radius);
//}
//int area(int length, int breadth) {
//	return length * breadth;
//}