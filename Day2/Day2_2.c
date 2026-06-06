#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,rev=0;
    printf("enter the number:);
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        rev=rev*10 = i;
        n=n/10;
    }
    printf("the reverse of the given number is %d",rev);
    return 0;
}