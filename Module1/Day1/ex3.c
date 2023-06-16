#include<stdio.h>

int main()
{
    int roll,phy,math,chem,total;
    float per;
    char fname[30],lname[30];
    printf("Enter the Roll Number of the student:");
    scanf("%d",&roll);
    printf("Enter the name of the Student:");
    scanf("%s%s",fname,lname);
    printf("Enter the marks of Physics,Maths and Chemistry:");
    scanf("%d%d%d",&phy,&math,&chem);
    total = phy+math+chem;
    per = total/3.0;
    
       printf("\nRoll No : %d\nName of the student : %s %s\n",roll,fname,lname);
       printf("Marks in Physics : %d\nMarks in Math : %d\nMarks in Chemistry : %d\n",phy,math,chem);
       printf("Total = %d\nPercentage = %5.2f\n",total,per);
}