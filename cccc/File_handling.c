#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// # puts
int main() {
	FILE* fp;
	char str[100];
	fp = fopen("f1.txt", "w");
	gets(str);
	fputs(str, fp);
}

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