#include<stdio.h>
int main()
{
    int a,b,c=0,n,term=3;
    printf("Which term do you want to know?");
    scanf("%d",&n);
    a=0;
    b=1;
    if(n==1)
    {
        printf("%d",a);
    }
    else if(n==2)
    {
        printf("%d",b);
    }
    else{
        while(term<=n)
         {
            c=a+b;
            a = b;
            b = c;
            term++;
         }
        printf("the %d term of fibonacci series is %d",n,b);
        }      
}    