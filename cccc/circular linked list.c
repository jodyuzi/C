#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



//struct node {
//	int data;
//	struct node* next;
//};
//
//struct node* createlist(struct node* last);
//void display(struct node*last);
//struct node* addempty(struct node* last, int value);
//struct node* addatbeg(struct node* last, int value);
//struct node* addatend(struct node* last, int value);
//struct node* addatafter(struct node* last, int value,int item);
//struct node* delete(struct node* last, int value);
//
//main() {
//	int choice,item,value;
//	struct node* last = NULL;
//	while (1) {
//		system("cls");
//		printf("\n1. create list");
//		printf("\n2. display list");
//		printf("\n3. addempty list");
//		printf("\n4. addatbeg list");
//		printf("\n.5 add at ent list");
//		printf("\n.6 add after list");
//		printf("\n.7 add delete list");
//		printf("\n.8 exit");
//		printf("enter ur choic =");
//		scanf("%d", &choice);
//		switch (choice) {
//		case 1:
//			last = createlist(last);
//			break;
//		case 2:
//			display(last);
//			break;
//		case 3:
//			printf("enter a number for list");
//			scanf("%d", &value);
//			last = addempty(last, value);
//			break;
//		case 4:
//			printf("enter for list");
//			scanf("%d", &value);
//			last = addatbeg(last, value);
//			break;
//		case 5:
//			printf("enter for list");
//			scanf("%d", &value);
//			last = addatend(last, value);
//			break;
//		case 6:
//			printf("enter for list");
//			scanf("%d", &value);
//			printf("enter item value after new value to be inserted");
//			scanf("%d", &item);
//			last = addatafter(last,value ,item);
//			break;
//		case 7:
//			printf("enter value to be deleted");
//			scanf("%d", &value);
//			last = delete(last, value);
//			break;
//		case 8:
//			exit(0);
//		default:
//			printf("invalid choice");
//
//		} // end of switch
//		system("pause");
//	} // end of while 
//} // end of main
//
//
//
//struct node* createlist(struct node* last) {
//	int i,n,value;
//	printf("enter value");
//	scanf("%d", &n);
//	printf("enter first data for list");
//	scanf("%d", &value);
//	last = addempty(last, value);
//	for (i = 2;i <= n;i++) {
//		printf("enter data for list");
//		scanf("%d", &value);
//		last = addatend(last, value);
//	}
//	return(last);
//}
//
//struct node* delete(struct node* last, int value) {
//	struct node* t, * p;
//	if (last == NULL) {
//		printf("list is empty");
//		return(last);
//	}
//	if (last == last->next && last->data == value) {
//		t = last;
//		last = NULL;
//		free(t);
//		return(last);
//	}
//	if (last->next->data == value) {
//		t = last->next;
//		last->next = t->next;
//		free(t);
//		return(last);
//	}
//	p = last->next;
//	while (p->next != last) {
//		if (p->next->data == value) {
//			t = p->next;
//			p->next = t->next;
//			free(t);
//			return(last);
//		}
//		p = p->next;
//	}
//	if (last->data == value) {
//		t = last;
//		p->next = last->next;
//		last = p;
//		free(t);
//		return(last);
//	}
//	printf("%d is not found", value);
//	return(last);
//}
//
//struct node* addatafter(struct node* last, int value,int item) {
//	struct node* t,*n;
//	t = last->next;
//	do {
//		if (t->data == item) {
//			n = (struct node*)malloc(sizeof(struct node));
//			n->data = value;
//			n->next = t->next;
//			t->next = n;
//			if (t == last)
//				last = n;
//			return(last);
//		}
//
//		t = t->next;
//	} while (t != last->next);
//	printf("%d not in list ", item);
//	return (last);
//}
//
//struct node* addatend(struct node* last, int value) {
//	struct node* n;
//	n = (struct node*)malloc(sizeof(struct node));
//	n->data = value;
//	n->next = last->next;
//	last->next = n;
//	last = n;
//	return(last);
//
//}
//
//struct node* addempty(struct node* last, int value) {
//	struct node* n;
//	n = (struct node*)malloc(sizeof(struct node));
//	n->data = value;
//	last = n;
//	last->next = last;
//	return(last);
//}
//
//struct node* addatbeg(struct node* last, int value) {
//	struct node* n;
//	n = (struct node*)malloc(sizeof(struct node));
//	n->data = value;
//	n->next= last->next;
//	last->next = n;
//	return(last);
//}
//
//void display(struct node* last) {
//	struct node* t;
//	if (last == NULL)
//		printf("list is empty");
//	else {
//		t = last->next;
//		do {
//			printf("%d->", t->data);
//			t = t->next;	
//		} while (t != last->next);
//		printf("NULL///\n");
//	}
//}



