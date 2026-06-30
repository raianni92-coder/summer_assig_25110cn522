#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    srand(time(0));
    int secretnum=rand()%100+1;
    int guess,attempt;
    attempt=0;
    while(1)
    {
        printf("Guess the number: ");
        scanf("%d",&guess);
        attempt++;
        if(guess==secretnum)
        {
            printf("Congratulations! you guessed it in %d attempts",attempt);
            break;
        }
        else if(guess<secretnum)
        {
            printf("Too low!\n Try again\n");
        }
        else if(guess>secretnum)
        {
            printf("Too high!\n Try again\n");
        }
    }
    return 0;
}