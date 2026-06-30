#include<stdio.h>
int main()
{
    char word[20][50],temp;
    int n,i,j,k;
    int len1,len2;
    printf("Enter number of words: ");
    scanf("%d",&n);
    printf("Enter the words:\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",word[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            len1=0;
            while(word[i][len1]!='\0')
            {
                len1++;
                len2=0;
            }
            while(word[j][len2]!='\0')
            {
                len2++;
            }
            if(len1>len2)
            {
                for(k=0;k<50;k++)
                {
                    temp=word[i][k];
                    word[i][k]=word[j][k];
                    word[j][k]=temp;
                }
            }
        }
    }
    printf("\nWords sorted by lenth:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",word[i]);
    }
    return 0;
}