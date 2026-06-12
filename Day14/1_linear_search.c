#include<stdio.h>
int main()
{
    int n,a[100],i,key,flag=0,position;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            flag=1;
            position=i+1;
            break;
        }
    }
    if(flag==1)
    {
        printf("element found at %d position",position);
    }
    else{
        printf("element not found");
    }
    return 0;
}