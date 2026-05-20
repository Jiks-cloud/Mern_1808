#include<stdio.h>
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if((num%2)==0){
        printf("Number is Even.. %d, %c",num,3);
    }
    else{
        printf("Number is Odd!! %d, %c",num,4);
    }
}