#include<stdio.h>
int prime(int a)
{
    int i;  
    if(a==1)
    printf("1 is not a prime number");
    else if(a==2)
    {
        printf("2 is a prime number");
    }
    else
    {
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                printf("not prime");
                break;
            }
            
        }
        printf("%d is a prime number",a);
    }
}
int main()
{
    int n;
    printf("enter the number to check");
    scanf("%d",&n);
    prime(n);
}