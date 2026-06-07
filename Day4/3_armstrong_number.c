#include<stdio.h>
int main()
{
    int n,key,i,a=0;
    printf("enter the number:");
    scanf("%d",&n);
    key=n;
    while(n!=0)
    {
        i=n%10;
        a=a+i*i*i;
        n=n/10;
    }
    if(a==key)
    {
        printf("%d is an armstrong number",key);
    }
    else
    {
        printf("%d is not an armstrong number");
    }
    return 0;
}