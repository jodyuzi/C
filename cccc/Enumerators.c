#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



//enum delivery {
//	pending, shipped, delivered
//}order1;
//
//main() {
//	enum delivery order;
//	order = pending; // order = 0
//	while (1) {
//		puts("enter order status:0 for pending, 1 for shipped, 2 for delivered");
//		scanf("%d", &order1);
//		printf("order status is %d\n", order1);
//
//		switch (order1) {
//		case pending: printf("order status is pending\n");
//			break;
//		case 1: printf("order status is shipped\n"); // order1 = shipped
//			break;
//		case delivered: printf("order status is delivered\n");
//			break;
//		default: printf("invalid order status\n");
//		}
//	}
//}




//
//enum evenodd {
//	/*true,false*/	// true false 0 1 hee hota bas word me nhi hote
//	even,odd
//};
//
//
//enum evenodd vivek(int x) {
//	if (x % 2 == 0)
//		return(even);
//	else
//		return(odd);
//};
//
//
//main() {
//	int n;
//	enum evenodd result;
//	printf("enter value:");
//	while (1) {
//		scanf("%d", &n);
//		result = vivek(n);
//		if (result == even)
//			printf("even");
//		else
//			printf("Odd");
//	}
//}