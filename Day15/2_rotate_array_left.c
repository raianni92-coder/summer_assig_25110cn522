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
    k=a[0];
    printf("Left rotated array is: ");
    for(j=0;j<n-1;j++)
    {
        a[j]=a[j+1];  
    }
    a[n-1]=k;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}    