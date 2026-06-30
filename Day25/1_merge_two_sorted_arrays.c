#include<stdio.h>
int main()
{
    int a[100],b[100],c[100],n,m,i,j,k;
    printf("enter the size of both the arrays: ");
    scanf("%d%d",&n,&m);
    printf("enter the array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of second array:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    i=0;
    j=0;
    k=0;
    while(i<n && j<m)
    {
        if(a[i]<=b[j])
        {
            c[k]=a[i];
            i++;
        }
        else{
            c[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<m)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    printf("the merged array is: ");
    for(i=0;i<n+m;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}