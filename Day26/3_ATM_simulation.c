#include<stdio.h>
int main()
{
    int choice;
    int deposit,withdraw,balance=0,ans;
    while(1)
    {
        printf("Enter the choice:\n1-Balance\n2-Deposit\n3-Withdraw\n ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf(" \nYour account balance is %d\n",balance);
                break;
            }
            case 2:
            {
                printf("\nenter the amount to deposit: \n");
                scanf("%d",&deposit);
                balance+=deposit;
                printf("\nCongratulations! Amount deposited successfully\n Available balance= %d\n",balance);
                break;
            }
            case 3:
            {
                printf("Enter the amount to withdraw: ");
                scanf("%d",&withdraw);
                if(balance<withdraw)
                {
                    printf("\nOops! Insufficient balance");

                }
                else{
                    balance-=withdraw;
                    printf("\nAmount withdrawn successfully!\n Available balance= %d\n",balance);
                }
                break;
            }
            default:
            {
                printf("\n**Invalid input**\n");
                break;
            }
        }
        printf("\nDo you want to exit (enter 1 if yes and 0 if no)? ");
        scanf("%d",&ans);
        if(ans==1)
        {
            printf("Thank you!");
            break;
        }
    }
    return 0;
}