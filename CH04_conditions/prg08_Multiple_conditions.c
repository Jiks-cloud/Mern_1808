#include<stdio.h>
void main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if((num>20)&&(num<500)){
        if((num>10)&&(num<50)){
            printf("Your Number %d is VALID",num);
        }
        else{
            printf("Your Number %d is INVALID",num);
        }
    }
    else{
        if((num>5)&&(num<50)){
            printf("Your Number %d is VALID",num);
        }
        else{
            printf("Your Number %d is INVALID",num);
        }
    }
}