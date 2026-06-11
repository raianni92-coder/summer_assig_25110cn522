#include<stdio.h>
int main()
{
    int a[100],n,i,even=0,odd=0;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    printf("The number of even and odd elements are %d and %d",even,odd);
    return 0;
}