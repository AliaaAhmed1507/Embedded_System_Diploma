/*
 ============================================================================
 Name        : Assignment.c
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n , sum=0;
	printf("Enter a integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	for(int i = 1 ; i <= n ; i++ )
	{
		sum += i;
	}
	printf("Sum = : %d", sum);
	fflush(stdin); fflush(stdout);
	return 0;
}
