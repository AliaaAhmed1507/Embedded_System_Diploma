/*
 ============================================================================
 Name        : C Array and string Assignment
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {

	char s[100];
	char a;
	int n=0;

	printf("Enter a string : ");
	fflush(stdin); fflush(stdout);
	gets(s);
	fflush(stdin); fflush(stdout);

	printf("Enter a character to find frequency : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&a);
	fflush(stdin); fflush(stdout);

	int l= strlen(s);
	for(int i=0; i<l;i++)
	{
		if(s[i]==a)
			n++;
	}

	printf("Frequency of %c = %d",a,n);
	fflush(stdin); fflush(stdout);
	return 0;
}
