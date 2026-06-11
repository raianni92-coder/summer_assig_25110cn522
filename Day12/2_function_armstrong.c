#include<stdio.h>
int armstrong(int a)
{
    int i,k,j=0;
    k=a;
    while(a!=0)
    {
        i=a%10;
        j=j+i*i*i;
        a=a/10;
    }
    if(k==j)
    {
        printf("%d is a armstrong number",k);
    }
    else{
        printf("%d is not an armstrong number",k);
    }
}
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    armstrong(n);
}