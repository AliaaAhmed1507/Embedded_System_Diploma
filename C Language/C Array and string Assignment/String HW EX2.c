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
	int n=0;

	printf("Enter a string : ");
	fflush(stdin); fflush(stdout);
	gets(s);
	fflush(stdin); fflush(stdout);

	int i=0;
	while(s[i]!='\0'){
	    if(s[i]!='\0')
		    n++;
		i++;
	}

	printf("Length of string : %d \n",n);
	fflush(stdin); fflush(stdout);
	return 0;
}
