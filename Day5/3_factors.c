#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number:");
    scanf("%d",&num);
    printf("the factors of the given number are:");
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}