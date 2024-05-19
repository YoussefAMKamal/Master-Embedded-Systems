/*
 ============================================================================
 Name        : EX2.c
 Author      : YA
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

struct Sdist{
	int feet;
	float inch;
};

int main(void) {

	int sumFe;
	float sumIn;

	struct Sdist d1;
	struct Sdist d2;

	printf("Enter information for 1st distance\nEnter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&d1.feet);

	printf("Enter inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d1.inch);

	printf("Enter information for 2nd distance\nEnter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&d2.feet);

	printf("Enter inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d2.inch);

	sumFe = d1.feet + d2.feet;

	sumIn = d1.inch + d2.inch;

	if(sumIn >= 12.0){
		sumIn -= 12.0;
		sumFe++;
	}

	printf("Sum of distances = %d' -%.1f\"", sumFe, sumIn);

	return 0;
}
