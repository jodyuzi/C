#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>




void add(int n) {
	printf("a+10 = %d", n + 10);
}
void multiply(int n) {
	printf("ax10 =%d", n * 10);
}
void callback(int n, void (*fp)()) {
	fp(n);
}

main() {
	int x;
	scanf("%d", &x);
	callback(x, add);
	return 0;
}



// # Callback basic

	/*void v1() {
		printf("V1");
	}
	void v2() {
		printf("V2");
	}
	void callback(void (*fp)()) {
		fp();
	}


	main() {
		callback(v1);
		
	}*/
