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

int main(void) {
	char x;
	printf("Enter an alphabet: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	switch(x)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
	{
		printf("%c is vowel.",x);
	}
	break;
	default:
	{
		printf("%c is consonant.",x);
	}
	}


	return 0;
}

