/* putchar example: printing the alphabet */

#include <stdio.h>
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char c;
	for (c = 'A'; c <= 'Z'; c++) putchar(c);

	_getch();
	return 0;
}