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

int fact = 1;

int Factorial(int num){
	if(num > 1){
		fact *= num;
		Factorial(--num);
	}
	return fact;
}

int main(void) {
	int x, result;
	printf("Enter an positive integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	result = Factorial(x);
	printf("Factorial of %d = %d",x,result);
	return 0;
}
