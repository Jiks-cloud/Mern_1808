#include<stdio.h>
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if((num%2==0) && (num>10)){
        printf("%d number is Even and Greater than 10",num);
    }
    else{
        printf("%d number is neither Even nor Greater than 10",num);
    }
}