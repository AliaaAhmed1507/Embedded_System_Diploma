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
	int n, x, L;


	printf("Enter no of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	fflush(stdin); fflush(stdout);

	for(int j=0 ; j<n ; j++)
	{
		scanf("%d",&arr[j]);
		fflush(stdin); fflush(stdout);
	}


	printf("Enter the elements to be inserted : \n");
	scanf("%d",&x);
	fflush(stdin); fflush(stdout);

	printf("Enter the location : \n");
	scanf("%d",&L);
	fflush(stdin); fflush(stdout);


	for(int i=n ; i>=L ; i--)
	{
		arr[i]=arr[i-1];
	}

    arr[L-1]=x;
	for(int j=0 ; j<=n ; j++)
	{
		printf("%d ",arr[j]);
		fflush(stdin); fflush(stdout);
	}

	return 0;
}
