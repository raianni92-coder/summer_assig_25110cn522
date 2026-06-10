#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=5-i)
        {
            printf(" ");
            j++;
        }
        j=1;
        while(j<=i)
        {
            printf("%d",j);
            j++;
        }
        j=i-1;
        while(j>0)
        {
            printf("%d",j);
            j--;
        }
        printf("\n");
        i++;
    }
    return 0;
}