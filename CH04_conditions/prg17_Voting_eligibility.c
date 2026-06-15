#include<stdio.h>
void main(){
    int age,id;
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Do you have ID proof:  \n 1='Yess' \n 0='No'..\n");
    scanf("%d",&id);


    if((age>=18)&&(id==1)){
        printf("You are eligible for voting..\n");
    }
    else if((age>=18)&&(id==0)){
        printf("Age is eligible but don't have ID proof, So you are not eligible..\n");
    }
    else if((age<18)&&(id==1)){
        printf("Age is not eligible but have ID proof, So you are not eligible..\n");
    }
    else {
        printf("You are not eligible ,No ID proof and under 18 age..\n");
    }
}
