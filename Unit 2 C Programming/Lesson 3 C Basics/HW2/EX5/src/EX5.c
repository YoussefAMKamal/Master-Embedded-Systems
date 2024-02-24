/*
 ============================================================================
 Name        : EX5.c
 Author      : me
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char x;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	if(x >= 'A' && x <= 'z')
		printf("%c is an alphabet",x);
	else
		printf("%c is not an alphabet",x);
	return 0;
}
