#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, key , rev=0;
    printf("enter the number:");
    scanf("%d",&n);
    key=n;
    while(n!=0)
    {
        i=n%10;
        rev= rev*10 +i;
        n = n/10;
    }
    if(rev==key)
    {
        printf(" the given number is palindrome number");

    }
    else{
        printf("not an palindrome number");

    }
    return 0;
}