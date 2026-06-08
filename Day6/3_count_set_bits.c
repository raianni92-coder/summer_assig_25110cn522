    #include<stdio.h>
int main()
{
    int num, i, rem,a[50],count=0;
    printf("enter the decimal number;");
    scanf("%d",&num);
    if(num==0)
    {
        printf("binary=0");
    }
    else{
        i=0;  
        while(num!=0)
        {
            rem=num%2;
            a[i]=rem;
            i++;
            num=num/2;
        }
        for(i=i-1;i>=0;i--)
        {
            if(a[i]==1)
            {
                count=count+1;
            }
        }
        printf("set bits in the given code is %d",count);
    }
    return 0;
}
