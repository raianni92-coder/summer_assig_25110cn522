#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0){
        i=n%10;
        sum=sum+i;
        n=n/10;
    }
    printf("sum of digits of the given number is %d",sum);
    return 0;

}


