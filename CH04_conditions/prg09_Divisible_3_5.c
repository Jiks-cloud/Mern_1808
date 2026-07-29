#include<stdio.h>
void main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if((num%3==0)&&(num%5==0)){
        printf("Number %d is Divisible by 3 And 5.",num);
    }
    else{
        printf("Number %d is not Divisible by 3 And 5.",num);
    }
}