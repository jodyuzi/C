#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>



//Testing #hehehehee33333333333

main()
{
	int x;
	scanf("%d", &x);
	printf("fk %d\n", fun(x));
}

int fun(int a) {
	if (a == 0)
		return a;
	else
		printf("%d\n", a);
		fun(a-1);
}
