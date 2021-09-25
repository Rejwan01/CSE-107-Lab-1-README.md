// C Program to interchange two variables

#include <stdio.h>
int main()
{
	int C,D;
	
	printf("Enter the value of C: ");
	
	scanf("%d",&C);
	
	printf("Enter the value of D: ");
	
	scanf("%d",&D);
	
	C = C + D;
	
	D = C - D;
	
	C = C - D;
	
	printf("\nThe value of C: %d",C);
	
	printf("\nThe value of D: %d",D);
	
	return 0;
	
	}	
