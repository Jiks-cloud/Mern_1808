#include<stdio.h>
void main(){
    int marks_1, marks_2, marks_3, marks_4, marks_5;
    float total, total_result;
    float percentage;
    printf("Enter Marks of 5 Subjects:");
    scanf("%d",&marks_1);
    scanf("%d",&marks_2);
    scanf("%d",&marks_3);
    scanf("%d",&marks_4);
    scanf("%d",&marks_5);
    printf("Enter Total Marks for Result:");
    scanf("%f",&total_result);

    total = marks_1 + marks_2 + marks_3 + marks_4 + marks_5;
    percentage = (total / total_result) * 100;
    printf("Total : %.2f",total);
    printf("\nPercentage : %.2f",percentage);

    if ((marks_1 < 35)||(marks_2 < 35)||(marks_3 < 35)||(marks_4 < 35)||(marks_5 < 35))
    {
        printf("\nYou're Fail!!\nBetter Luck Next Time!!");
    }else
    {
        if (percentage > 90){
            printf("\nGrade : A+");
        }else if (percentage > 75){
            printf("\nGrade : A");
        }else if (percentage > 60){
            printf("\nGrade : B");
        }else if (percentage > 50){
            printf("\nGrade : C");
        }else{
            printf("\nGrade : D");
            printf("\nYou're Fail!!\nBetter Luck Next Time!!");
        }
    }    
}