#include<stdio.h>

int sum(int a[], int size);

int sum(int a[], int size)
{
    int sum=0,*p;
    for(p = &a[0]; p < &a[size] ; p += 2)
    {
        sum += *p;
    }
    return sum;
}

int main()
{
    int n,arr[n],res;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    res=sum(arr,n);
    printf("Sum of alternate elements of a given array:%d\n",res);
    return 0;
}