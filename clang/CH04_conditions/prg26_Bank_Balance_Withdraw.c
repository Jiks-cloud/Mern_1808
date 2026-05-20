#include<stdio.h>
void main(){
    int option;
    float balance,withdrawal_amt;
    printf("......Banking System......");
    printf("\n 1. Balance");
    printf("\n 2. Withdraw");
    printf("Enter balance:");
    scanf("%f",&balance);
    printf("\nEnter option: ");
    scanf("%d",&option);

    switch(option){
        case 1:
            printf("Your Current Balance is %.2f",balance);
            break;
        case 2:
            printf("Enter Amount to Withdraw: ");
            scanf("%f",&withdrawal_amt);

            if(withdrawal_amt<=0){
                printf("Invlaid Amount...\n");
            }
            else if(withdrawal_amt > balance){
                printf("Insufficient Balance!!\nPlease Check your Balance for Withdrawal\n");
            }
            else{
                balance -= withdrawal_amt;
                printf("Rs.%.2f Amount of Withdrawal successfull!!..\n",withdrawal_amt);
                printf("Remaining Balance: Rs.%.2f",balance);
            }
            break;
        default:
            printf("Invalid Option!!....");
            break;
    }
}