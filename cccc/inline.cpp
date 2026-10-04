#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>



// # Inline Function

//inline int add(int,int);
//
//void main() {
//	int a = 10, b = 20, c;
//	c=add(a, b);
//	// Inline function is a function that is expanded in line when it is called. When the inline function is called, the compiler replaces the function call with the actual code of the function. This can improve the performance of the program by reducing the overhead of function calls.
//	// Inline functions are defined using the inline keyword. The inline keyword is a request to the compiler to replace the function call with the actual code of the function. However, the compiler may ignore this request if it determines that inlining the function would not be beneficial.
//	// Inline functions are typically used for small, frequently called functions. They can also be used for functions that are defined in header files, as they can help to reduce code duplication and improve performance.
//	// Example of an inline function
//	/*inline int add(int x, int y) {
//		return x + y;
//	}*/
//	std::cout << "The sum of " << a << " and " << b << " is: " << add(a, b) << std::endl;
//	system("pause");
//}
//
//
//
//inline int add(int x, int y) {
//	return x + y;
//}