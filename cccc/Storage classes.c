#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


// # external class 

//int x;
//main() {
//	/*int x;*/
//	extern int x; // tabhi extern likhenge jab global me declare na ho variable
//	printf("x=%d", x);
//	f1();
//	printf("x=%d", x);
//}
////int x; / yaha pe x declare kiya hota to har func me extern int x; likhna padta like protype declaration
//f1() {
//	x++;
//	printf("x=%d", x);
//}

// # static class

//main() {
//	f1();
//	f1();
//}
//int f1() {
//	/*int i = 0;*/ // class declare nhi krenge to default auto class rahega usme garbage value hoti h
//	static int i; // static me default value 0 hoti h and jab tak program end nhi hota variable destroy nhi hota h
//	i++;
//	printf("i = %d\n", i);
//}


// # auto and register storage class

//main() {
//	/*register int x = 5; */ // register class aise use karte
//	int x = 5;
//	printf("%d", x);
//	{
//		int x = 2;
//		printf("%d", x);  // jo varial local sabse jada kareeb hoga wahi prefer krega 
//	}
//	printf("%d", x); // yaha pe 5 ayega kyuki ye main block local variable jada kareeb h
//}