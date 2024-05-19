/*
 ============================================================================
 Name        : EX1.c
 Author      : YA
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

struct Sstudent {
	char name[10];
	int roll;
	float marks;
};

int main(void) {
	printf("Enter information of student:\n");

	struct Sstudent s1;

	printf("Enter name: ");

	fflush(stdin);fflush(stdout);

	scanf("%s", s1.name);

	printf("Enter roll number: ");

	fflush(stdin);fflush(stdout);

	scanf("%i", &s1.roll);

	printf("Enter marks: ");

	fflush(stdin);fflush(stdout);

	scanf("%f", &s1.marks);

	printf("Displaying information\n");
	printf("name: %s\n", s1.name);
	printf("Roll: %i\n", s1.roll);
	printf("Marks: %.2f\n", s1.marks);

	return 0;
}
