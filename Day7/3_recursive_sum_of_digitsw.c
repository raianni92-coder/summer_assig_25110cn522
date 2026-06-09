#include<stdio.h>
int sum(int n)
{
    if(n<10)
    {
        return n;
    }
    else{
        return sum(n/10)+n%10;
    }
}
int main()
{
    int num,result;
    printf("enter the number:");
    scanf("%d",&num);
    result= sum(num);
    printf("sum of digits is %d",result);
    return 0;
}