#include<stdio.h>
int reverse(int n)
{
    if (n<20)
    {
        return n;
    }
    else{
        return reverse(n/10)+10*(n%10);
    }
}
int main()
{
    int num,result;
    printf("enter the number:");
    scanf("%d",&num);
    result = reverse(num);
    printf("the reverse of %d is %d",num,result);
}