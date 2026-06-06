#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    printf("enter the number:");
    scanf("%d",&n);
    printf("Multiplication table of the number:");
    for(i=1;i<=10;i++)
    {
        printf("%d * %d =%d\n",n,i,n*i);

    }
    return 0;

}