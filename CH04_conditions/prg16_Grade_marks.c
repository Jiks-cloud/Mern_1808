#include<stdio.h>
void main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);

    if((marks>90)){
        printf("Your Grade is 'A+'..");
    }
    else if(marks>=80){
        printf("Your Grade is 'A'..");
    }
    else if(marks>=75){
        printf("Your Grade is 'B'..");
    }
    else if(marks>60){
        printf("Your Grade is 'C'..");
    }
    else if(marks>50){
        printf("Your Grade is 'D'..");
    }
    else{
        printf("Your Grade is 'E'..");
    }
}