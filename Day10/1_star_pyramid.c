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
        while(j<=(2*i-1))
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}