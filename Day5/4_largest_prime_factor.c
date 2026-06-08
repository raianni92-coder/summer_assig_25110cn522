#include<stdio.h>
int main()
{
    int num, i, max,j,fact;
    printf("enter the number:");
    scanf("%d",&num);
    printf("the largest prime factor is ");
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            max=i;
            for(j=2;j<max;j++)
            {
                if(max%j==0)
                {
                    continue;
                }
                else{
                    fact=max;
                }
            }
        }
    }
    printf("%d",fact);
}