/*
 ============================================================================
 Name        : EX1.c
 Author      : me
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(void) {
	char string[100], c;
	int freq = 0;
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(string);
	printf("Enter a character to find frequency: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);

	for(int i = 0;i < strlen(string);i++)
		if(string[i] == c)
			freq++;
	printf("Frequency of %c = %d", c, freq);
	return 0;
}
