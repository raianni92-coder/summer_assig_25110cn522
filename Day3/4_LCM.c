#include<stdio.h>
int main()
{
    int num1,num2,a,b,i,min;
    printf("enter both the numbers:");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        a=num1;
        b=num2;

    }
    else{
        a=num2;
        b=num1;
    }
    for(i=a;i<=a*b;i++)
    {
        if((i%a==0)&&(i%b==0))
        {
            min=i;
            break;
        }
    }
    printf("the LCM of both the numbers is %d",min);
    return 0;
}