#include<stdio.h>

int main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Wrong Entry\n");
    }
    else if(marks>=90 && marks<=100)
    {
        printf("Grade A\n");
    }
    else if(marks>=75 && marks<90)
    {
        printf("Grade B\n");
    }
    else if(marks>=60 && marks<75)
    {
        printf("Grade C\n");
    }
    else if(marks>=50 && marks<60)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Grade F\n");
    }
}