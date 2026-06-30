#include<stdio.h>
int main()
{
    int choice,score=0;
    printf("Welcome to the quiz! ");
    printf("\nIn this quiz you have to answer 5 questions \n and for each question, you will get 1 point.\n Your score will be shown at the end of the quiz.\n so, get ready for the quiz ");
    printf("\nQuestion1 - Which planet is known as red planet?\n1-Earth\n2-Venus\n3-Mars\n4-Jupiter");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    if(choice==3)
    {
        printf("\nCorrect!");
        score++;
    }
    else
    {
        printf("\nWrong!");
    }
    printf("\nQuestion2- Which langauge is primarily used for Android app development?\n1-Java\n2-HTML\n3-SQL\n4-CSS");
    printf("\nEnter the choice: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\nCorrect!");
        score++;
    }
    else{
        printf("\nWrong!");
    }
    printf("\nQuestion3-How many days are there in a leap year?\n1-365\n2-364\n3-366\n4-367");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    if(choice==3)
    {
        printf("\nCorrect!");
        score++;
    }
    else{
        printf("\nWrong!");
    }
    printf("\nQuestion4-Who invented telephone?\n1-Thomas Edison\n2-Alexander Graham Bell\n3-Nikola Tesla\n4_Issac Newton");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    if(choice==2)
    {
        printf("\nCorrect!");
        score++;
    }
    else{
        printf("\nWrong!");
    }
    printf("\nQuestion5-Which is the largest ocean in the world?\n1-Atlantic Ocean\n2-Indian ocean\n3-Pacific Ocean\n4-Artic Ocean");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    if(choice==3)
    {
        printf("\nCorrect!");
        score++;
    }
    else{
        printf("\nWrong");
    }
    printf("\nCongratulations! Quiz completed");
    printf("\nYour score is %d/5",score);
    return 0;
}