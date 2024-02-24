/*
 ============================================================================
 Name        : EX1.c
 Author      : me
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int x;
	printf("Enter an integer you want to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("%d is %s.",x,(x%2 == 0)?"even":"odd");

	return 0;
}
