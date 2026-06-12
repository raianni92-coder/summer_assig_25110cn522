#include<stdio.h>
int main()
{
    int n,a[100],i,j,k,m,count=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(m=0;m<i;m++)
        {
            if(a[i]==a[m])
            {
                break;
            }
        }
        if(m==i)
        {
            k=a[i];
            for(j=i+1;j<n;j++)
            {
                 if(k==a[j])
                 {
                    count++;
                 }
            }
            if(count>=1)
            {
                 printf("%d is a duplicate element\n",k);
            }
        }
        
    }
    return 0;
}