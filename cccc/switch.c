////#define _CRT_SECURE_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>     // exit() ke liye jaruri hai
//
//
//int main() {
//    int choice, a, b, s;
//    while (1) // infinite loop 1
//    {
//        //clrscr(); //
//        printf("\n 1. Addition");
//        printf("\n 2. Odd / Even");
//        printf("\n 3. Printing N numbers");
//        printf("\n 4. exit");
//
//        printf("\n\nEnter your choice: ");
//        scanf("%d", &choice);
//
//        switch (choice)
//        {
//        case 1:
//            printf("Enter two numbers: ");
//            scanf("%d%d", &a, &b);
//            s = a + b;
//            printf("Sum is %d", s);
//            break;
//
//        case 2:
//            printf("Enter number: ");
//            scanf("%d", &a);
//            if (a % 2 == 0)
//                printf("Even number");
//            else
//                printf("Odd number");
//            break;
//
//        case 3:
//            printf("Enter a number: ");
//            scanf("%d", &a);
//            for (b = 1; b <= a; b++) {
//                printf("%d\n", b);
//            }
//            break;
//        case 4:
//            exit(0);
//
//        default:
//            printf("Invalid choice");
//        }
//        //   getch(); //
//    }
//}


//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//
//int main() {
//	int choice, a, b, c;
//	printf("\n1. addition");
//	printf("\n2.oddd even");
//	printf("\n3.printing N number");
//	printf("\n\nEnter your choice\n");
//	scanf("%d", &choice);
//	switch (choice) {
//	case 1:
//		printf("Enter two numbers :");
//		scanf("%d%d", &a, &b);
//		c = a + b;
//		printf("\nSum of is %d", c);
//		break;
//	case 2:
//		printf("enter a number");
//		scanf("%d", &a);
//		if (a % 2 == 0)
//			printf("even number");
//		else
//			printf("odd number");break;
//	case 3:
//		printf("enter a number");
//		scanf("%d", &a);
//		for (b = 1;b <= a;b++)
//			printf("%d", b);
//		break;
//	default:
//		printf("invalid");
//	}
//	/*getch();*/
//
//	}