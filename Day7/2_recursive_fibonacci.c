#include<stdio.h>
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main()
{
    int num,result;
    printf("which term you want to know?");
    scanf("%d",&num);
    result= fibonacci(num);
    printf("the %dth term of fibonacci series is %d",num,result);
    return 0;
}