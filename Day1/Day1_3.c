#include<stdio.h>
#include<math.h>
int main()
{
    int n ,i,fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("factorial of given number is:");
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;

}