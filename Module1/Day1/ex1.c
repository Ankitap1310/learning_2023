#include<stdio.h>

int biggest(int, int);

int main()
{
    int a,b,c;
    printf("Enter the two numbers : ");
    scanf("%d%d", &a, &b);
    c=biggest(a,b);
    printf("Biggest of two numbers : %d\n",c);
    return 0;
}

int biggest(int a,int b)
{
    return(a > b ? a : b);
    /*if (a > b) 
    {
        return a;
    }
    else
    {
        return b;
    }*/
}