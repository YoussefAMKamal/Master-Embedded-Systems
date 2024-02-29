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

int pwr = 1;

int power(int num, int x){
	if(x > 0){
		pwr *= num;
		power(num, --x);
	}
	return pwr;
}

int main(void) {
	int x , y, result;
	printf("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("Enter power number(positive integer): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&y);
	result = power(x, y);
	printf("%d^%d = %d",x, y, result);
	return 0;
}
