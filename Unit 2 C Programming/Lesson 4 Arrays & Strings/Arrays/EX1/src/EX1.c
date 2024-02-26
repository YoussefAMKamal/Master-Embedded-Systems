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

int main(void) {
	float a[2][2], b[2][2];
	printf("Enter the elements of the 1st martix\n");
	for(int i = 0;i < 2;i++){
		for(int j = 0;j < 2;j++){
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the elements of the 2nd martix\n");
	for(int i = 0;i < 2;i++){
		for(int j = 0;j < 2;j++){
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&b[i][j]);
		}
	}
	printf("Sum of Matrix\n");
	for(int i = 0;i < 2;i++){
		for(int j = 0;j < 2;j++){
			printf("%.1f\t",a[i][j] + b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
