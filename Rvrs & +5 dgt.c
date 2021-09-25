// C program to reverse the number and calculate the sum of it's digits //

#include<stdio.h> 
 
int main() 

{ 
	int n, a, m=0, sum=0; 
 
	printf("Enter a number: "); 
 
	scanf("%d", &n); 
 
	 
 
 do
 
	{ 
	
        a = n%10; 
		
        m = m*10 + a; 
		
        sum = sum + a;
		
        n = n/10; 
		
	} 
	
	while(n != 0) ;
	
	printf("Reverse of the entered number: %d\n", m); 
	
	printf("Sum of the digits = %d",sum); 
 
	return 0; 
} 
