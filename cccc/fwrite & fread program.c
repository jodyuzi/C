#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct book {
	int id;
	char title[50];
	float price;
}b1, b2;
addbook() {
	FILE *fp;
	fp = fopen("bookpro.dat", "ab"); // 1234... records use krne ke liye wb ki jagah ab use karenge append
	printf("enter book id\nname\n\price\n");
	scanf("%d", &b1.id);
	scanf("%s", b1.title);
	scanf("%f", &b1.price);
	fwrite(&b1, sizeof(b1), 1, fp);
	fclose(fp);
	/*system("cls");*/
}
readbook() {
	FILE *fp;
	fp = fopen("bookpro.dat", "rb");
	if (fp == NULL) {
		printf("book not found");
		exit(1);
	}
	while (fread(&b2, sizeof(b2), 1, fp) > 0) {
		printf("Book id %d\nName %s\nPrice %f", b2.id, b2.title, b2.price);
	}
	fclose(fp);
}
main() {
	/*FILE *fp, *rd;*/
	int choice;
	while (1) {
		/*system("cls");*/
		printf("1. Add book\n");
		printf("2. Read book\n");
		printf("exit");
		printf("\n\nEnter choice");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			addbook();
			break;
		case 2:
			readbook();
			system("pause");
			break;
		case 3:
			exit(0);
		default:
			printf("invalid choice");
		}
	}
	
}