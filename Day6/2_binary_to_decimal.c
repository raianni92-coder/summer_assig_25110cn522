#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,k=0;
    printf("enter the number:");
    scanf("%d",&n);
    i=0;
    while(n!=0)
    {
        j=n%10;
        k=k+j*pow(2,i);
        i++;
        n=n/10;
    }
    printf("%d",k);
    return 0;
}