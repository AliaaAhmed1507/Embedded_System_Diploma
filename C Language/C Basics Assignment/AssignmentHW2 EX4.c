/*
 ============================================================================
 Name        : Assignment.c
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float n;
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&n);
	if(n>0)
	{
		printf("%f is positive.\n",n);
	}
	else if(n<0)
	{
		printf("%f is negative.\n",n);
	}
	else{
		printf("You entered zero");
	}

	fflush(stdin); fflush(stdout);
	return 0;
}
