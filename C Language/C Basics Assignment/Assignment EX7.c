/*
 ============================================================================
 Name        : Assignment.c
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&b);
	fflush(stdin); fflush(stdout);

	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping, value of a = %d \n",a);
	printf("After swapping, value of b = %d \n",b);
	fflush(stdin); fflush(stdout);
	return 0;
}
