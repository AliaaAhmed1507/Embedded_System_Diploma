/*
 ============================================================================
 Name        : Assignment.c
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n , f=1;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	if(n == 0 || n == 1)
		printf("Factorial = %d",f);
	else if(n > 1)
	{
		for(int i = 1 ; i <= n ; i++ )
			{
				f *= i;
			}
			printf("Factorial = %d", f);
	}
	else
	{
		printf("Error!!! Factorial of negative number doesn't exist.");
	}

	fflush(stdin); fflush(stdout);
	return 0;
}
