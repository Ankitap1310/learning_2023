#include <stdio.h>  

int main()  
{    
    char op;  
    int a,b;   
    float res;    
    printf (" Enter the first number: ");  
    scanf("%d", &a);  
    printf (" Enter the operator:");  
    scanf("%s", &op); 
    printf (" Enter the second number: ");  
    scanf("%d", &b);   
      
    if (op == '+')  
    {  
        res = a + b;   
        printf (" Addition of %d and %d is: %f\n", a, b, res);  
    }  
      
    else if (op == '-')  
    {  
        res = a - b; 
        printf (" Subtraction of %d and %d is: %f\n", a, b, res);  
    }  
      
    else if (op == '*')  
    {  
        res = a * b;  
        printf (" Multiplication of %d and %d is: %f\n", a, b, res);  
    }  
      
    else if (op == '/')  
    {  
        if (b == 0)    
        {  
            printf (" \n Divisor cannot be zero. Please enter another value ");  
            scanf ("%d", &b);        
        }  
        res = a / b;  
        printf (" Division of %d and %d is: %.2f\n", a, b, res);  
    }  
    else  
    {  
        printf(" \n You have entered wrong inputs.\n");  
    }  
    return 0;  
}  