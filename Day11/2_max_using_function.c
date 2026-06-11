#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    int n1,n2,result;
    printf("enter both the numbers:");
    scanf("%d%d",&n1,&n2);
    result = max(n1,n2);
    printf("the maximum number between %d and %d is %d",n1,n2,result);
    return 0;
}