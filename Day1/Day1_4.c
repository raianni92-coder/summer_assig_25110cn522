#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,count=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        count=count+1;
        n=n/10;
    }
    printf("the number of digits in the given number is %d",count);
    return 0;
    
}