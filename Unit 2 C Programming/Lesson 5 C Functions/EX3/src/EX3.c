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

void reverse(char string[], int n){
	int size = strlen(string);
	char temp;
	if(n < size/2){
		temp = string[n];
		string[n] = string[(size - 1) - n];
		string[(size - 1) - n] = temp;
		reverse(string, ++n);
	}
}

int main(void) {
	char string[100];
	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);
	gets(string);
	reverse(string, 0);
	printf("%s\n",string);
	return 0;
}
