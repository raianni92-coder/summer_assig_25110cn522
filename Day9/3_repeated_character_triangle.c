#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    char ch='A';
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            printf("%c",ch);
            j++;
        }
        printf("\n");
        ch++;
        i++;
    }
    return 0;
}