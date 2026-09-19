#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



// # const pointer to const

//const int* const p;


// # const pointer

//main() {
//	/*int* const p;*/ 
//	const int x;
//	int* const p =&x;
//	++(*p);
//}


// # pointer to const

//main() {
//	const int x = 5;
//	const int* p;
//	p = &x;
//	x++;
//	++(*p);
//}


// # Const variable

//main() {
//	const int x; // const variable ke name se changes nhi kr sakte
//	int* p;
//	/*x++;*/ //const lagane usme changes nhi kr sakte but pointer se kr sakte 
//	p = &x;
//	++(*p); // pointer se const variable me changes kr sakte
//}