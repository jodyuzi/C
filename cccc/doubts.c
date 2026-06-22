#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>










// DMA

//main() {
//	float *p;
//	p=(float*)malloc(4);
//	*p = 6.9;
//}
//






// DMA

// #Pointers

//void swap(int*, int*);
//main() {
//	int a, b;
//	puts("enter value of a and b");
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("after swap a=%d b=%d", a, b);
//}
//
//void swap(int *a,int *b) {
//
//	int t;
//	t = *a;
//	*a = *b;
//	*b = t;
//}



// #Recursion

//main() {
//	int k, x;
//	while (1) {
//		puts("enter value recursion:");
//		scanf("%d", &x);
//		k = fun(x);
//		printf("fun value:%d\n", k);
//	}
//}
//
//
//int fun(int a) {
//	int s;
//	if (a==1)
//		return(a);
//	else {
//		s = a + fun(a - 1);
//		return s;
//	}
//}