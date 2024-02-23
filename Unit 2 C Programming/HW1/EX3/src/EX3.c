/*
 ============================================================================
 Name        : EX3.c
 Author      : me
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int x, y;
	printf("Enter two integers: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("Sum: %d",x + y);
}
