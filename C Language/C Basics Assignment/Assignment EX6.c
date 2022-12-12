/*
 ============================================================================
 Name        : Assignment.c
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b,temp;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&b);
	fflush(stdin); fflush(stdout);
	temp =a;
	a=b;
	b= temp;
	printf("After swapping, value of a = %d \n",a);
	printf("After swapping, value of b = %d \n",b);
	fflush(stdin); fflush(stdout);
	return 0;
}
