#include<stdio.h>
int main()
{
    int n,a[100],i,key,count=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element whose frequency is to be found out:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            count++;
        }
    }
    printf("The frequency of element %d is %d",key,count);
    return 0;
}