#include<stdio.h>
int main()
{
    int n,key,i,j,sum=0,mul;
    printf("enter the number:");
    scanf("%d",&n);
    key=n;
    while(n!=0)
    {
        i=n%10;
        mul=1;
        for(j=1;j<=i;j++)
        {
            mul=mul*j;
        }
        sum=sum+mul;
        n=n/10;

    }
    if(sum==key)
    {
        printf("%d is a strong number",key);
    }
    else{
        printf("not a strong number");
    }
    return 0;
}