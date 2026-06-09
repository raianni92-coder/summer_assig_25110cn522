#include<stdio.h>
int factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main()
{
    int num,result;
    printf("enter the number:");
    scanf("%d",&num);
    result = factorial(num);
    printf("factorial=%d",result);
    return 0;
}

