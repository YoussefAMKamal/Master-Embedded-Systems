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
#include <string.h>

int main(void) {
	char string[100];
	printf("Enter the string : ");
	fflush(stdin);fflush(stdout);
	gets(string);
	printf("Reverse string is : ");
	for(int i = strlen(string) - 1;i >= 0;i--)
		printf("%c", string[i]);
	return 0;
}
