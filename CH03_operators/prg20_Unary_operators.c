#include<stdio.h>
void main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num<0){
        num*=-1;
    }
    printf("Number: %d",num);
}