/*
 ============================================================================
 Name        : EX7.c
 Author      : me
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	float a, b;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);

	a += b;
	b = a - b;
	a -= b;

	printf("After swapping, value of a = %.2f\n",a);
	printf("After swapping, value of b = %.1f",b);
}
