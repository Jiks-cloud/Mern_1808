#include<stdio.h>
void main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    if((marks >= 33)&&(marks <= 100)){
        printf("Congratulations You PASSED with %d marks %c",marks,3);
    }
    else{
        printf("Better Luck Next Time, You FAILED!! with %d marks %c",marks,4);
    }
}