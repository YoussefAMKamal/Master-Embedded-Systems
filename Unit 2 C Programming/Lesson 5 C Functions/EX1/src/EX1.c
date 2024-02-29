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

int checkprime(int num){
	for(int i = 2;i <= num/2;i++)
		if(num%i == 0)
			return 0;
	return 1;
}

void prime_numbers(int x, int y){
	printf("Prime numbers between %d and %d are: ",x ,y);

	for(++x;x < y;x++)
		if(checkprime(x))
			printf("%d ",x);
}

int main(void) {
	int x, y;
	printf("Enter two numbers(intervals): ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	prime_numbers(x,y);
	return 0;
}
