#include<stdio.h>
void main(){
    // const float OTP=89854;
    // float user_OTP;
    // printf("Enter OTP: ");
    // scanf("%f",&user_OTP);
    // if(!(user_OTP==OTP)){
    //     printf("INVALID OTP...");
    // }
    // else{
    //     printf("WELCOME...\n");
    // }

    const float OTP;
    float user_OTP;
    printf("Enter OTP: ");
    scanf("%f",&OTP);
    printf("Enter user OTP: ");
    scanf("%f",&user_OTP);
    if(!(user_OTP==OTP)){
        printf("INVALID OTP...");
    }
    else{
        printf("YOUR' WELCOME...\n");
    }
}