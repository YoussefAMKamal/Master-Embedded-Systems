/*
 ============================================================================
 Name        : EX3.c
 Author      : YA
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

struct Scn{
	float real;
	float img;
};

void Sum(struct Scn n1, struct Scn n2){
	printf("Sum = %.1f+%.1fi", n1.real+n2.real, n1.img+n2.img);
}

int main(void) {

	struct Scn n1;
	struct Scn n2;

	printf("For 1st complex number\n");
	printf("Enter real and imaginary respectively: ");

	fflush(stdin);fflush(stdout);
	scanf("%f %f", &n1.real, &n1.img);

	printf("For 2nd complex number\n");
	printf("Enter real and imaginary respectively: ");

	fflush(stdin);fflush(stdout);
	scanf("%f %f", &n2.real, &n2.img);

	Sum(n1, n2);
	return 0;
}
