#include<stdio.h>
#include<math.h>
int main()
{
    int range, n,key,i,j,k,a=0,count;
    printf("enter the range limit:");
    scanf("%d",&range);
    for(n=1;n<=range;n++)
    {
        a=0;
        count=0;
        k=n;
        while(k!=0)
        {
             k=k/10;
             count++;
        }
        i=n;
        while (i!=0)
        {
            j=i%10;
            a = a+ (int)(pow(j,count)+0.5);
            i=i/10;/* code */
        }
        
        if(a==n)
        {
            printf("%d ",n);
        }    
    }
    return 0;
    
}