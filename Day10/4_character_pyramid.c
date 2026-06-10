#include<stdio.h>
int main()
{
    int i,j;
    char ch;
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
        ch='A';
        while(j<=i)
        {
            printf("%c",ch);
            ch++;
            j++;
        }
        ch='A'+ i-2;
        while(ch>='A')
        {
            printf("%c",ch);
            ch--;
        }
        printf("\n");
        i++;
    }
    return 0;
}