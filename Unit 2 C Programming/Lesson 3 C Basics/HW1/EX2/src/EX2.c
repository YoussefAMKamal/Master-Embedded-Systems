/*
 ============================================================================
 Name        : EX2.c
 Author      : me
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int x;
	printf("Enter a integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("You entered: %d",x);
}
