#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>

// # Reference Variables pointer jaisa hota h but pointer se alag h ki reference variable ko reassign nahi kar sakte h. Reference variable ko declare karte waqt usko kisi variable ke sath bind karna padta h aur uske baad usko change nahi kar sakte h. Reference variable ka use mainly function me hota h jaha hum kisi variable ko pass karte h aur usko modify karna chahte h.

//void main() {
//	int a = 10;
//	int b = 20;
//	int& ref = a; // reference variable a ka nickname alias h but dono alag variable h
//	ref = b;
//	std::cout << "value of a =" << a << std::endl;
//	system("pause");
//}