#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("the given number %d is a perfect number",n);
    }
    else{
        printf("not a perfect number");
    }
    return 0;
}