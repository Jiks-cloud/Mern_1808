#include<stdio.h>
void main(){
    float amt,disc=0,pay;
    printf("Enter amount for purchase: ");
    scanf("%f",&amt);
    printf("Your Amount is %f\n",amt);

    if(amt>1000){
        disc=amt*0.20;
        printf("Discount: 20%% = %.2f\n", disc);      
        pay = amt-disc;
        printf("Amount is : %.2f\n",pay);
    }
    else if(amt>500){
        disc=amt*0.10;
        printf("Discount: 10%% = %.2f\n", disc);
        pay = amt-disc;
        printf("Amount is : %.2f",pay);
    }
    else{
        printf("No discount applicable...\n");
        pay = amt;
        printf("Amount is : %.2f",pay);
    }
}