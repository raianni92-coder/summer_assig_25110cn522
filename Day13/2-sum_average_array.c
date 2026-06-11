#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;
    float avg;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum =sum+a[i];
    }
    avg=(float)sum/n;
    printf("The sum and average of given array is %d and %f",sum ,avg);
    return 0;
}