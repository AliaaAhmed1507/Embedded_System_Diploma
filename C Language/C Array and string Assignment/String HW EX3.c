/*
 ============================================================================
 Name        : C Array and string Assignment
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {

	char s[100], rs[100];
	int n;

	printf("Enter the string : ");
	fflush(stdin); fflush(stdout);
	gets(s);
	fflush(stdin); fflush(stdout);

	n=strlen(s);
	int i,j;
	for( i=n-1 , j=0 ; i>=n , j<n ; i-- , j++)
	{
		rs[j]=s[i];
	}
	rs[j]='\0';
	printf("Reverse string is : %s \n",rs);
	fflush(stdin); fflush(stdout);
	return 0;
}
