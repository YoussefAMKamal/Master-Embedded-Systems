/*
 ============================================================================
 Name        : EX6.c
 Author      : YA
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

union job{
	char name[32];
	float salary;
	int worker_no;
}u;

struct job1{
	char name[32];
	float salary;
	int worker_no;
}s;

int main(void) {
	printf("size of union = %d", sizeof(u));
	printf("\nsize of structure = %d", sizeof(s));
	return 0;
}
