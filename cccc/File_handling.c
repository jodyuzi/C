#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


// # fprintf & fscanf

main() {
	FILE* fp;
	int a, b, c;
	fp = fopen("f1.txt", "r");
	fscanf(fp, "%d%d%d", &a, &b, &c);
	printf("a=%d b=%d c=%d", a, b, c);
	fclose(fp);
}

//main() {
//	FILE* fp;
//	int a, b;
//	fp = fopen("f1.txt", "w");
//	scanf("%d%d", &a, &b);
//	fprintf(fp, "a =%d b =%d a+b =%d", a, b, a + b);
//	fclose(fp);
//}


// # fwrite and fread
//
//struct book {
//	int bookid;
//	char title[30];
//	float price;
//}b1,b2;
//
//main() {
//
//	FILE *fp;
//	fp=fopen("mybook.dat", "rb");
//	if (fp == NULL) {
//		printf("book not found");
//		exit(1);		
//	}
//	while (fread(&b2, sizeof(b2), 1, fp)>0) {
//		printf("bookid %d\nbook name %s\nbook price %f", b2.bookid, b2.title, b2.price);
//	}
//	fclose(fp);
//}

//main() {
//	FILE* fp;
//	fp = fopen("mybook.dat", "wb");
//	printf("enter bood id");
//	scanf("%d", &b1.bookid);
//	/*fflush(stdin);*/
//	printf("enter book name");
//	scanf("%s",&b1.title);
//	printf("book price");
//	scanf("%f", &b1.price);
//	fwrite(&b1, sizeof(b1), 1, fp);
//	fclose(fp);
//}



// # puts

//int main() {
//	FILE* fp;
//	char str[100];
//	fp = fopen("f1.txt", "w");
//	gets(str);
//	fputs(str, fp);
//	fclose(fp);
//}

// # fgets

//main() {
//	FILE* fp;
//	char str[100];
//	fp = fopen("f1.txt", "r");
//	if (fp == NULL) {
//		printf("file not found");
//		exit(1);
//	}
//	while (fgets(str, 9, fp) != NULL) {
//		puts(str);
//	}
//	fclose(fp);
//}



//  #Read mode feof() function

//int main() {
//	FILE* fp;
//	char ch;
//	fp = fopen("f1.txt", "r");
//	if (fp == NULL) {
//		printf("file not found");
//		exit(1);
//	}
//	ch = fgetc(fp);
//	while (!feof(fp)) {
//		printf("%c", ch);
//		ch = fgetc(fp);
//	}
//	fclose(fp);
//}



//main() {
//	FILE *fp;
//	char str[100];
//	int i;
//	fp=fopen("vivek.txt", "w");
//	if (fp == NULL) {
//		puts("file not found");
//		exit(1);
//	}
//	gets(str);
//	for (i = 0;i<strlen(str); i++) {
//		fputc(str[i], fp);
//	}
//}