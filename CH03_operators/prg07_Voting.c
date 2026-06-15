#include<stdio.h>
void main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age >= 18){
        printf("You are %d, so yor are eligible for voting",age);
    }
    else {
        printf("You are %d, so yor are not eligible for voting",age);
    }
}