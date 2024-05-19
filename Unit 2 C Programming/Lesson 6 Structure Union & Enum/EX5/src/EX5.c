/*
 ============================================================================
 Name        : EX5.c
 Author      : YA
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

#define area(r) M_PI * pow(r,2)


int main(void) {
	printf("Enter radius of circle:");

	int rad;

	fflush(stdin);fflush(stdout);
	scanf("%d", &rad);

	printf("Area = %.2lf", area(rad));
	return 0;
}
