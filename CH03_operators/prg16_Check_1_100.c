#include<stdio.h>
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if((num>=1)&&(num<=100)){
        printf("%d number lies between 1 and 100",num);
    }
    else{
        printf("%d number  does not lies between 1 and 100",num);
    }
}