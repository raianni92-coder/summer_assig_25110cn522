#include<stdio.h>
int fibonacci(int n)
{
    int i=2,a=0,b=1,c;
    if(n==1)
    {
        printf("%d",b);
    }
    else{
        printf("%d\t",b);
        while(i<=n)
        {
            c=a+b;
            a=b;
            b=c;
            i++;
            printf("%d\t",c);   
        }
    }
}
int main()
{
    int num;
    printf("How many term of fibonacci series, you want to know?");
    scanf("%d",&num);
    fibonacci(num);
}