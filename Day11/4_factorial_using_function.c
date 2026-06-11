#include<stdio.h>
int factorial(int a)
{
    int i,fact=1;
    for (i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,result;
    printf("enter the number:");
    scanf("%d",&n);
    result =  factorial(n);
    printf("factorial of %d is %d",n,result);
    return 0;
}