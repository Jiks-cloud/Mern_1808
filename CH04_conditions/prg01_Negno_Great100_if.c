#include<stdio.h>
void main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if((num>100)||(num<0)){
        printf("You entered Wrong Number !!!!\n");
        printf("\a");
    }
    printf("Number is: %d",num);
}