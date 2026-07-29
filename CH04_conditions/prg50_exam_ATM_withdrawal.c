#include<stdio.h>
void main(){
    int balance, withdrawal_amt;
    printf("Enter your Account Balance:");
    scanf("%d",&balance);
    printf("Enter Amount to Withdraw:");
    scanf("%d",&withdrawal_amt);
    
    if(balance < 1000){
        printf("Minimum Balance Left in your account!!");
        printf("\nAdd some money in your account to Withdraw!!");
    }else{
        if ((withdrawal_amt % 100 == 0)){
            if (withdrawal_amt < balance){
                balance = balance - withdrawal_amt;
                printf("\nTransaction Successful!!!");
                printf("\nWithdrawn Amount : %d",withdrawal_amt);
                printf("\nBalance in Account : %d",balance);
            }
            else{
                printf("\nPlease Enter withdrawal amount according to your balance!!");
            }            
        }
        else{
            printf("\nSorry for the inconvinence....");
            printf("\nWithdrawal Amount must be divisible by 100");
            printf("\nBalance in Account : %d",balance);
        }
    }
}