#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



//struct node {
//	int info;
//	struct node* next;
//};
//
//struct node* start = NULL;
//void display();
//void deletenode();
//struct node* createnode() {
//	struct node* n;
//	n = (struct node*)malloc(sizeof(struct node));
//	return n;
//}
//
//void insert() {
//	struct node* temp,*t;
//	temp = createnode();
//	printf("enter student ");
//	scanf("%d", &temp->info);
//	temp->next = NULL;
//	if (start == NULL) {
//		start = temp;
//	}
//	else {
//		t = start;
//		while (t->next != NULL)
//			t = t->next;
//		t->next = temp;
//
//	}
//}
//
//main() {
//	int choice;
//	
//	while (1) {
//		system("cls");
//		printf("1 insert students\n");
//		printf("2 display all data\n");
//		printf("3 deletenode\n");
//		printf("3 exit =");
//		scanf("%d", &choice);
//		switch (choice) {
//		case 1:
//			insert();
//			break;
//		case 2:
//			display();
//			system("pause");
//			break;
//		case 3:
//			deletenode();
//			break;
//		case 4:
//			exit(0);
//		default:
//			printf("invalid choice");
//		}
//	}
//
//	/*display();*/
//}
//
//void display() {
//	struct node* t;
//		t = start;
//		while (t != NULL) {
//			printf("%d ->", t->info);
//			t = t->next;
//		}
//		printf("NULL h ab\n");
//}
//
//void deletenode() {
//	struct node* r;
//	if (start == NULL)
//		printf("empty");
//	else {
//		r = start;
//		start = start->next;
//		free(r);
//	}
//}



// # dimag ka dahi practice


//struct node {
//	int info;
//	struct node* next;
//};
//
//struct node* start = NULL;
//
//struct node* createnode() {
//	struct node* n;
//	n = (struct node*)malloc(sizeof(struct node));
//	return n;
//}
//
//void insert() {
//	struct node* temp, * t;
//	temp = createnode();
//	printf("enter students");
//	scanf("%d", &temp->info);
//	temp->next = NULL;
//	if (start == NULL)
//		start = temp;
//	else {
//		t = start;
//		if (t == NULL)
//			while (t != NULL)
//				t = t->next;
//		t->next = temp;
//
//	}
//	//else {
//	//	t = start;
//	//	while (t!=NULL)
//	//		t=t->next;
//	//	t->next = temp;
//	//}
//}
//void deletenode() {
//	struct node* r;
//	if (start == NULL)
//		printf("empty list\n");
//	else {
//		r = start;
//		start = start->next;
//		free(r);
//	}
//}
//void viewlist() {
//	struct node* v;
//	v = start;
//	if (v = NULL)
//		printf("empty listt\n");
//	else {
//		while (v != NULL) {
//			printf("%d->", v->info);
//		}
//		printf("NULL aa gaya\n");
//	}
//}
//
//int menu() {
//	int ch;
//	system("cls");
//	printf("1 insert node\n");
//	printf("2 delete node\n");
//	printf("3 view node\n");
//	printf("4 exit =");
//	scanf("%d", &ch);
//	return ch;
//}
//
//
//
//main() {
//	while (1) {
//		switch (menu()) {
//		case 1:
//			insert();
//			break;
//		case 2:
//			deletenode();
//			break;
//		case 3:
//			viewlist();
//			system("pause");
//			break;
//		case 4:
//			exit(0);
//		default:
//			printf("inavlid choice");
//			system("pause");
//		}
//	}
//}

