#include<stdio.h>
int main()
{
    int x,n,key=1;
    printf("enter the number and its raised power:");
    scanf("%d%d",&x,&n);
    while(n!=0)
    {
        key=key*x;
        n--;
    }
    printf("%d",key);
    return 0;
}