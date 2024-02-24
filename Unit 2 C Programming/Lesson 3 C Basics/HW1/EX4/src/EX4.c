/*
 ============================================================================
 Name        : EX4.c
 Author      : me
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	float x, y;
	printf("Enter two integers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x,&y);
	printf("Product: %f",x * y);
}
