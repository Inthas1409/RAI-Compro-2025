#include<stdio.h>
int main()
{
    int option,num,de,draw;
    float bal;
    do {

        printf("====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option : ");
        scanf("%d",&option);

        if (option==1) {
            printf("Current Balance : %.2f\n",bal=de-draw);
        } else if  (option==2) {
            printf("Enter amount to deposit : ");
            scanf("%d",&de);
        } else if (option==3) {
            printf("Enter amount to withdraw : ");
            scanf("%d",&draw);
            printf("Withdrawal successful.\n");
        } else {
            printf("Thank you for using the ATM.\n");
            break;
        }
    } while (bal!=0);
        
    return 0;
}