/*
 ============================================================================
 Name        : Assignment.c
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float n1 , n2 , result=0;
	char c;

	printf("Enter operator either + or - or * or divide : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	fflush(stdin); fflush(stdout);

	printf("Enter two operands : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&n1,&n2);

	switch(c){
	case '+' :{
		result = n1 + n2;
		}
		break;
	case '-':{
		result = n1 - n2;
		}
		break;
	case '*':{
			result = n1 * n2;
		}
		break;
	case '/':{
			result = n1 / n2;
		}
		break;
	}

	printf("%f %c %f = %f",n1 ,c ,n2 ,result);
	fflush(stdin); fflush(stdout);
	return 0;
}
