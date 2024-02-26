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
	float sum = 0, num;
	int n;
	printf("Enter the numbers of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		printf("%d. Enter number: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&num);
		sum += num;
	}
	printf("Average = %.2f",sum/n);
	return 0;
}
