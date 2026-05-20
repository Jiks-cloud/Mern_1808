#include<stdio.h>
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if((num<5)||(num>50)){
        printf("%d number is less than 5 or greater than 50",num);
    }
    else{
        printf("%d number is neither less than 5 nor greater than 50",num);
    }
}