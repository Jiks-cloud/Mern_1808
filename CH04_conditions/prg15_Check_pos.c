#include<stdio.h>
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if((num>0)){
        printf("Number %d is positive.. ",num);
    }
    else{
        printf("Number %d is not positive.. ",num);
    }
}