/*
 ============================================================================
 Name        : C Array and string Assignment
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {

	float arr1[2][2], arr2[2][2], sum[2][2];

	printf("Enter the elements of 1st matrix \n");
	fflush(stdin); fflush(stdout);
	for(int i=0 ; i<2 ; i++)
		{
			for(int j=0; j<2 ; j++)
			{
				printf("Enter a%d%d: ",i+1,j+1);
				fflush(stdin); fflush(stdout);
				scanf("%f",&arr1[i][j]);
				fflush(stdin); fflush(stdout);
			}
		}

	printf("Enter the elements of 2nd matrix \n");
	fflush(stdin); fflush(stdout);
	for(int i=0 ; i<2 ; i++)
		{
			for(int j=0; j<2 ; j++)
			{
				printf("Enter b%d%d: ",i+1,j+1);
				fflush(stdin); fflush(stdout);
				scanf("%f",&arr2[i][j]);
				fflush(stdin); fflush(stdout);

			}
		}

	for(int i=0 ; i<2 ; i++)
		{
			for(int j=0; j<2 ; j++)
			{
				sum[i][j]=arr1[i][j]+arr2[i][j];
			}
		}

	printf("Sum Of Matrix : \r\n");
	for(int i=0 ; i<2 ; i++)
		{
			for(int j=0; j<2 ; j++)
			{
				printf("%.2f ",sum[i][j]);
				fflush(stdin); fflush(stdout);
			}
			printf("\r\n"); fflush(stdin); fflush(stdout);
		}


	return 0;
}
