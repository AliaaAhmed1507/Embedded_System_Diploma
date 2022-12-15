/*
 ============================================================================
 Name        : C Array and string Assignment
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {

	float arr[100], aver=0.0, sum=0.0 ;
	int n ;


	printf("Enter the number of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	fflush(stdin); fflush(stdout);
	for(int i=0 ; i<n ; i++)
	{
		printf("%d. Enter number: ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&arr[i]);
		fflush(stdin); fflush(stdout);
		sum+=arr[i];
	}

	aver=sum/n;
	printf("Average = %.2f \n",aver);
	fflush(stdin); fflush(stdout);

	return 0;
}
