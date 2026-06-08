#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


//char* reverse(char* p);
//main() {
//	char s[10];
//	int i;
//	for (i = 0;i <= 4;i++) {
//		printf("s base address : %p\n", (void*)&s[i]);
//		printf("s base address d: %d\n", &s[i]);
//	}
//	
//	while (1) {
//		/*system("cls");*/
//		printf("\ncharacter\n");
//		fgets(s,10,stdin);
//		printf("character \n%s", reverse(s));
//
//	}
//}
//char* reverse(char* p) {
//	int a,i;
//	char c;
//	for (a = 0;*(p + a) != '\0';a++);
//	for (i = 0;i< a / 2;i++)
//	{
//		c = *(p + i);
//		*(p + i) = *(p + a - 1 - i);
//		*(p + a - 1 - i) = c;
//	}
//	return(p);
//}



//int length(char*);
//char* reverse(char*);
//main()
//{
//	char s[] = "computer";
//	system("cls");
//	printf("%d", length("computer"));
//	printf("\n%s", reverse(s));
//}
//char* reverse(char *p) {
//	int l, i;
//	char t;
//	for (l = 0;*(p + l) != '\0';l++);
//	for (i = 0;i < l / 2;i++) {
//		t = *(p + i);
//		*(p + i) = *(p + l - 1 - i);
//		*(p + l - 1 - i) = t;
//	}
//	return (p);
//}
//int length(char *p) {
//	int i;
//	for (i = 0;*(p + i) != '\0';i++);
//	return(i);
//}



//void input(int* p) {
//	int i;
//	for (i = 0;i <= 4;i++)
//		scanf("%d", p + i);
//}
//void display(int* p) {
//	int i;
//	for (i = 0;i <= 4;i++)
//		printf("Value %d\n", *(p + i));
//}
//void sort(int *p) {
//	int round, t, i;
//	for (round = 0;round <= 4;round++)
//	{
//		for (i = 0;i <= 4;i++)
//			if (*(p + i) > *(p + i + 1))
//			{
//				t = *(p + i);
//				*(p + i) = *(p + i + 1);
//				*(p + i + 1) = t;
//				};
//	}
//}
//
//main() {
//	int a[5],*p;
//	input(a);
//	display(a);
//	sort(a);
//	display(a);
//}


//void swap(int* x, int* y);
//
//main() {
//	int a, b;
//	puts("Enter Value");
//	scanf("%d\n%d", &a, &b);
//	swap(&a,&b);
//	printf("a =%d\nb =%d", a, b);
//}
//
//
//void swap(int *x,int *y) {
//	int t;
//	t = *x;
//	*x = *y;
//	*y = t;
//}