/*
 ============================================================================
 Name        : Assignment.c
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float x,y,z;
	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if(x >= y && x >= z)
	{
		printf("Largest number = %f.\n",x);
	}
	else if(y >= x && y >= z)
	{
		printf("Largest number = %f.\n",y);
	}
	else{
		printf("Largest number = %f.\n",z);
	}

	fflush(stdin); fflush(stdout);
	return 0;
}
