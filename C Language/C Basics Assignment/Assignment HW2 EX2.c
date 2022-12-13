/*
 ============================================================================
 Name        : Assignment.c
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char x;
	printf("Enter an alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);
	if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'|| x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
		printf("%c is a vowel.\n",x);
	else
		printf("%c is a consonant.\n",x);

	fflush(stdin); fflush(stdout);
	return 0;
}
