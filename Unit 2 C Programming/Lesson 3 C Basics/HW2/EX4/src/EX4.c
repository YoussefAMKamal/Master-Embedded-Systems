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
	float x;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	if(x > 0)
		printf("%.2f is positive",x);
	else if(x < 0)
		printf("%.2f is negative",x);
	else
		printf("You entered zero");
	return 0;
}
