/*
 ============================================================================
 Name        : Assignment.c
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1, n2 ,sum;
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&n1,&n2);
	sum =n1+ n2;
	fflush(stdin); fflush(stdout);
	printf("Sum: %d",sum);
	fflush(stdin); fflush(stdout);
	return 0;
}
