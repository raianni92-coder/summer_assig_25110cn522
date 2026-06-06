#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, product=1;
    printf("enter the number:");
    scanf("%d",&n);
    if(n==0)
    {
        printf("input should not be 0")
    }
    else
    {
         while(n!=0)
         {
           i = n%10;
           product=product*i;
           n = n/10;
         } 
    }
    printf("product of digits is %d",product);


    return 0;
}