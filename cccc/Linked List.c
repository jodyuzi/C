#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


struct node {
	int info;
	struct node* next;
};

struct node* start = NULL;
void display();
void deletenode();
struct node* createnode() {
	struct node* n;
	n = (struct node*)malloc(sizeof(struct node));
	return n;
}

void insert() {
	struct node* temp,*t;
	temp = createnode();
	printf("enter student ");
	scanf("%d", &temp->info);
	temp->next = NULL;
	if (start == NULL) {
		start = temp;
	}
	else {
		t = start;
		while (t->next != NULL)
			t = t->next;
		t->next = temp;

	}
}

main() {
	int choice;
	
	while (1) {
		system("cls");
		printf("1 insert students\n");
		printf("2 display all data\n");
		printf("3 deletenode\n");
		printf("3 exit =");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			insert();
			break;
		case 2:
			display();
			system("pause");
			break;
		case 3:
			deletenode();
			break;
		case 4:
			exit(0);
		default:
			printf("invalid choice");
		}
	}

	/*display();*/
}

void display() {
	struct node* t;
		t = start;
		while (t != NULL) {
			printf("%d ->", t->info);
			t = t->next;
		}
		printf("NULL h ab\n");
}

void deletenode() {
	struct node* r;
	if (start == NULL)
		printf("empty");
	else {
		r = start;
		start = start->next;
		free(r);
	}
}