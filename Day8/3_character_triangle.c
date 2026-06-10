#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    while(i<=5)
    {
        j=1;
        char ch='A';
        while(j<=i)
        {
            printf("%c",ch);
            ch++;
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}