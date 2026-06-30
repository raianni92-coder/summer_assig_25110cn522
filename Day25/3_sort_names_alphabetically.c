#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,temp;
    char name[20][50],str[50];
    printf("enter the number of names: ");
    scanf("%d",&n);
    printf("enter the names:\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",&name[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            k=0;
            while(name[i][k]==name[j][k] && name[i][k]!='\0')
            {
                k++;
            }
            if(name[i][k]>name[j][k])
            {
                for(k=0;k<50;k++)
                {
                    temp=name[i][k];
                    name[i][k]=name[j][k];
                    name[j][k]=temp;
                }
            }      
        }
    }
    printf("\nNames in alphabetical order:\n ");
    for(i=0;i<n;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}