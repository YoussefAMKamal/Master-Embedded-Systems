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
	char string[100];
	int len = 0;
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(string);
	while(1){
		if(string[len] == '\0')
			break;
		len++;
	}
	printf("Length of string: %d",len);
	return 0;
}
