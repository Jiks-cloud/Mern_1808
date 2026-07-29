#include<stdio.h>
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if((num%2)==0){
        printf("%d Number is Even",num);
    }
    else{
        printf("%d Number is Odd",num);
    }
}