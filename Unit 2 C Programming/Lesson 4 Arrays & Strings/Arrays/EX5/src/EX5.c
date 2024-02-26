/*
 ============================================================================
 Name        : EX5.c
 Author      : me
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int num, ele;
	printf("Enter no of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	int a[num];

	for(int i = 0;i < num;i++)
		scanf("%d",&a[i]);

	printf("Enter the element to be searched: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&ele);

	for(int j = 0;j < num;j++)
		if(a[j] == ele)
			printf("Number found at the location = %d",j+1);
	return 0;
}
