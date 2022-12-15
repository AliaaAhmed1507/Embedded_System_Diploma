/*
 ============================================================================
 Name        : C Array and string Assignment
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {

	int arr[10][10] , t[10][10] ;
	int n1 ,n2;


	printf("Enter rows and column of matrix: ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&n1,&n2);
	fflush(stdin); fflush(stdout);

	printf("Enter elements of matrix: \n");
	fflush(stdin); fflush(stdout);
	for(int i=0 ; i<n1 ; i++)
	{
		for(int j=0 ; j<n2 ; j++)
		{
			printf("Enter element a%d%d: ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%d",&arr[i][j]);
			fflush(stdin); fflush(stdout);
		}
	}

	printf("Entered  matrix: \n");
	fflush(stdin); fflush(stdout);
	for(int i=0 ; i<n1 ; i++)
	{
		for(int j=0 ; j<n2 ; j++)
		{
			printf("%d ",arr[i][j]);
			fflush(stdin); fflush(stdout);
		}
		printf("\n\n");
	}


	for(int i=0 ; i<n1 ; i++)
	{
		for(int j=0 ; j<n2 ; j++)
		{
			t[j][i]=arr[i][j];
		}
		printf("\n\n");
	}


	printf("Transpose of matrix: \n");
	fflush(stdin); fflush(stdout);
	for(int i=0 ; i<n2 ; i++)
	{
		for(int j=0;j<n1;j++)
		{
			printf("%d ",t[i][j]);
			fflush(stdin); fflush(stdout);
		}
		printf("\n\n");
	}

	return 0;
}
