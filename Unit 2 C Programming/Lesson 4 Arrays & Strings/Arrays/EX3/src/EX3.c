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

int main(void) {
	int r,c;
	printf("Enter row and column of matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d", &r, &c);
	int a[r][c];
	printf("Enter the elements martix:\n");
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++){
			printf("Enter elements a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered Matrix:\n");
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of Matrix:\n");
	for(int i = 0;i < c;i++){
		for(int j = 0;j < r;j++){
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
