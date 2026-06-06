#include<stdio.h>
int main()
{
     int num1,num2,a,b,i,max;
     printf("enter the numbers:");
     scanf("%d%d",&num1,&num2);
     if(num1<num2)
     {
          a=num1;
          b=num2;
     }
     else
     {
          a=num2;
          b=num1;
     }
     for(i=1;i<=a;i++)
     {
          if((a%i==0) && (b%i==0))
          {
               max=i;
          }
     }
     printf("the GCD of given numbers is %d",max);
     return 0;
     
}