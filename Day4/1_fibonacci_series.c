#include<stdio.h>
int main()
{
    int a,b,c=0;
    a=0;
    b=1;
    printf("%d\n",a);
    printf("%d\n",b);
    while(c<100)
    {
        c=a+b;
        printf("%d\n",c);
        a = b;
        b = c;

    }
    return 0;
}    