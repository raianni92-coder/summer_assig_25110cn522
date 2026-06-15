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
    j=n-1;
    printf("the reversed array is:");
    for(j=0;j<=n/2;j++)
    {
        k=a[j];
        a[j]=a[n-1-j];
        a[n-1-j]=k;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}    