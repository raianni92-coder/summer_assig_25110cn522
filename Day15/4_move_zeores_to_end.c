#include<stdio.h>
int main()
{
    int a[100],n,i,j,k;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array after moving zeroes to end: ");
    k=0;
    for(j=0;j<n;j++)
    {
        if(a[j]!=0)
        {
            a[k]=a[j];
            k++;
        }
    }
    while(k<n)
    {
        a[k]=0;
        k++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
} 