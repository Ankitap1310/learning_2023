#include<stdio.h>

int bit_operations(int num,int oper_type);

int bit_operations(int num,int oper_type)
{
    if (oper_type == 1)  
    {
        printf("%d with 1st bit set: ",num);  
        return (num | (1 << (1-1)));  
    }  
      
    else if (oper_type == 2)  
    {  
        printf("%d with 31st bit cleared: ",num);
        return (num & (~(1 << (31 - 1)))); 
    }  
      
    else if (oper_type == 3)  
    {  
        printf("%d with 16th bit toggled: ",num);
        return (num ^ (1 << (16 - 1))); 
    }  

}

int main()
{
    int n,option,res;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the option to perform operation: ");
    scanf("%d",&option);
    printf("%d\n",bit_operations(n,option));
    return 0;
}