#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age<0)
    {
        printf("Invalid age");
    }
    else if(age>=18)
    {
        printf("Congratulations! you are eligible to vote");
    }
    else{
        printf("sorry! you are not eligible to vote \n Try after %d years",18-age);
    }
    return 0;
}