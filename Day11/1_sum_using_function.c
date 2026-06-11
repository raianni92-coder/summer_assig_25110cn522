#include<stdio.h>
int sum(n1,n2)
{
    return n1+n2;
}
int main()
{
    int num1,num2,result;
    printf("enter the numbers");
    scanf("%d%d",&num1,&num2);
    result = sum(num1,num2);
    printf("%d+%d = %d",num1,num2,result);
    return 0;
}