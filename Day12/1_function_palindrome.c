#include<stdio.h>
int  palindrome(int a)
{
    int k,i,rev=0;
    k=a;
    while(a!=0)
    {
        i=a%10;
        rev=rev*10 + i;
        a=a/10;
    }
    if(k==rev)
    {
        printf("%d is a palindrome number",k);
    }
    else{
        printf("%d is not a palindrome number",k);
    }
}
int main()
{
    int n,result;
    printf("enter the number:");
    scanf("%d",&n);
    result=palindrome(n);
    return 0;
}