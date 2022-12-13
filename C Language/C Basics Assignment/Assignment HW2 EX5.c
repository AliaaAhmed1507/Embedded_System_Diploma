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
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		printf("%c is an alphabet.\n",c);
	}
	else
	{
		printf("%c is not an alphabet.\n",c);
	}

	fflush(stdin); fflush(stdout);
	return 0;
}
