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
	float x, y, z;
	printf("Enter three numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&x, &y, &z);
	printf("Largest number = ");
	if(x > y)
		printf("%f",(x > z) ? x:z);
	else
		printf("%f",(y > z) ? y:z);
	return 0;
}
