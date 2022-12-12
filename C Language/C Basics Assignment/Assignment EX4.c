/*
 ============================================================================
 Name        : Assignment.c
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float n1, n2 ,sum;
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&n1,&n2);
	sum =n1 * n2;
	fflush(stdin); fflush(stdout);
	printf("Product: %f",sum);
	fflush(stdin); fflush(stdout);
	return 0;
}
