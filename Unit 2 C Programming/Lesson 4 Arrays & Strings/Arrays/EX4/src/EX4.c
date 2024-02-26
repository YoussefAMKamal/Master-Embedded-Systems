/*
 ============================================================================
 Name        : EX4.c
 Author      : me
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int num, new, loc;
	printf("Enter no of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	int a[num], b[num+1];

	for(int i = 0;i < num;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be inserted: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&new);
	printf("Enter the location: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&loc);

	for(int i = 0,j = 0;i < num;i++,j++){
		if(i == (loc -1)){
			b[j] = new;
			j++;
		}
		b[j] = a[i];
	}

	for(int j = 0;j <= num;j++){
		printf("%d ",b[j]);
	}
	return 0;
}
