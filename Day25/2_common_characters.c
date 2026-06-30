#include<stdio.h>
int main()
{
    int i,j;
    char str[100],a[100];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    printf("Enter another string: ");
    fgets(a,sizeof(a),stdin);
    for(i=0;str[i]!='\0';i++)
    {
        for(j=0;a[j]!='\0';j++)
        {
            if(str[i]==a[j])
            {
                printf("%c",str[i]);
                break;
            }
        }
    } 
    return 0;
}
