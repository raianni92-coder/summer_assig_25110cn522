#include<stdio.h>
int perfect(int n)
{
    int a,i,sum=0;
    a=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }

    }
    if(a==sum)
    {
        printf("%d is a perfect number",a);
    }
    else{
        printf("%d is not a perfect number",a);
    }
}
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    perfect(num);
}