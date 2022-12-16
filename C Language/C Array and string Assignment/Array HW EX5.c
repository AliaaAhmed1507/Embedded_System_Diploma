/*
 ============================================================================
 Name        : C Array and string Assignment
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {

	int arr[100] ;
	int n, x,L;
	int f=0;

	printf("Enter no of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	fflush(stdin); fflush(stdout);

	for(int j=0 ; j<n ; j++)
	{
		scanf("%d",&arr[j]);
		fflush(stdin); fflush(stdout);
	}

	printf("Enter the element to be searched : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	fflush(stdin); fflush(stdout);

	for(int j=0 ; j<n ; j++)
	{
		if(arr[j]==x)
		{
			f=1;
			L=j+1;
			break;
		}
	}

	if(f==1)
	{
		printf("Number found at the location : %d",L);
	}
	else
	{
		printf("Number not found : -1");
	}

	return 0;
}
