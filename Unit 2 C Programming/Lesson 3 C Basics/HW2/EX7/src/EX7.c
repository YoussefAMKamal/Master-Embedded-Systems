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
	int x, sum = 1;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x > 0)
	{
		for(int i = 2;i <= x;i++)
			sum *= i;
		printf("Sum = %d",sum);
	}
	else
		printf("Error!!! Factorial of negative number doesn't exist.");
	return 0;
}
