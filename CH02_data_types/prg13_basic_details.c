#include<stdio.h>
void main(){
    char name[20];
    int roll_no;
    float marks;

    printf("Enter name of student: ");
    scanf("%s", &name);
    printf("Enter roll_no of student: ");
    scanf("%d", &roll_no);
    printf("Enter marks of student: ");
    scanf("%f", &marks);

    printf("Name: %s\n",name);
    printf("Roll No: %d\n",roll_no);
    printf("Marks: %f\n",marks);
}