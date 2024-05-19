/*
 ============================================================================
 Name        : EX4.c
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
	int marks;
};

int main(void) {
	printf("Enter information of students:\n");

	struct Sstudent s1[10];

	for(int i = 0;i < 10;i ++){
		printf("For roll number %i\n", i+1);

		s1[i].roll = i+1;

		printf("Enter name: ");

		fflush(stdin);fflush(stdout);
		scanf("%s", s1[i].name);

		printf("Enter marks: ");

		fflush(stdin);fflush(stdout);
		scanf("%d", &s1[i].marks);
	}

	printf("Displaying information of students:\n");
	for(int i = 0;i<10;i++){
		printf("Information for roll number %i:\n", i+1);
		printf("name: %s\n", s1[i].name);
		printf("Marks: %d\n", s1[i].marks);
	}
	return 0;
}
