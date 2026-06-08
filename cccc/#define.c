#define _CRT_SECURE_NO_WARNINGS
#define pi 3.14
#include <stdio.h>
#define sum(a,b) a+b
         // Macro bhi bolte
#define multi11(f,k) f*k
             //(4+3,4-2) 4+3*4-2  4+12-2 = 14
			//(7+2) 7*2 NHI HOTA UPAR WALA correct h
           // multi11(f,k) (f)*(k)  yese krne pe pehle + hoga then multiply 

#undef multi11 // isse macro close ho jata 0 ho jata

//
//main() {
//	int r;
//	float a;
//	printf("sum of a+b = %d", sum(4, 5));
//	printf("\nmulti of f k := %d", multi11(3,2));
//	printf("\nmulti of f k := %d", multi11(4+3, 4-2));
//	                                      
//	scanf("%d", &r);
//	a = pi * r * r;
//	printf("area :%f", a);
//}