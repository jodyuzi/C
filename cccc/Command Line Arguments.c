#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



main(int avrg, char* fp[]) {
	int i;
	puts(fp[1]);
	for (i = 0;i < avrg;i++) {
		printf("\n%s", fp[i]);
	}
	system("pause");
}