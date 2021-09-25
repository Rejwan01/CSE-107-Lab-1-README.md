/* C Program for Addition, Subtraction, Division,Multiplication
and Modulus of two integer numbers through keyboard */

#include<stdio.h>

int main()

{  
    int num1,num2;
    
    printf("please enter a no: ");
    scanf("%d",&num1);
    
    printf("\nplease enter another no: ");
    
     scanf("%d",&num2);
    
    printf("\n %d + %d = %d",num1,num2,(num1+num2));
    
    printf("\n %d - %d = %d",num1,num2,(num1-num2));
    
    printf("\n %d / %d = %d",num1,num2,(num1/num2));
    
    printf("\n %d * %d= %d",num1,num2,(num1*num2));
    
    
    printf("\n %d %% %d = %d",num1,num2,(num1%num2));
    
    //scanf("%d%d",&num1&&num2);
    
    return 0;
    
    }
    

