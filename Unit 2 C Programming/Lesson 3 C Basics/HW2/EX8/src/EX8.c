/*
 ============================================================================
 Name        : EX8.c
 Author      : me
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	float x, y;
	char op;
	printf("Enter operation either + or - or * or /: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&op);
	printf("Enter two operands:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x, &y);
	printf("%.1f %c %.1f = ",x,op,y);
	switch(op)
	{
	case '+':
	{
		printf("%.1f",x+y);
	}
	break;
	case '-':
	{
		printf("%.1f",x-y);
	}
	break;
	case '*':
	{
		printf("%.1f",x*y);
	}
	break;
	case '/':
	{
		printf("%.1f",x/y);
	}
	break;
	}
	return 0;
}
