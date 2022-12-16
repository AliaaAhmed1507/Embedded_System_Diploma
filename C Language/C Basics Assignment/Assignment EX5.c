/*
 ============================================================================
 Name        : Assignment.c
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char c;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	fflush(stdin); fflush(stdout);
	printf("ASCII value of %c = %d",c,c);
	fflush(stdin); fflush(stdout);
	return 0;
}
