#include<stdio.h>
void main(){
    int age;
    printf("Enter a number for age: ");
    scanf("%d",&age);

    if((age>=18)&&(age<=60)){
        printf("Your age is %d so, eligible for voting ",age);
    }
    else{
        printf("You are not eligible for voting");
    }
}