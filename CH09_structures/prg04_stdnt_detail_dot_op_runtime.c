#include<stdio.h>
#include<string.h>
struct student{
    int rollno;
    char name[100];
    float marks;
};
int main(){
    struct student s1;
    struct student s2;
    printf("Enter rollno of student 1: ");
    scanf("%d",&s1.rollno);
    printf("Enter name of student 1: ");
    scanf("%s",s1.name);
    printf("Enter marks of student 1: ");
    scanf("%f",&s1.marks);
    printf("Enter rollno of student 2: ");
    scanf("%d",&s2.rollno);
    printf("Enter name of student 2: ");
    scanf("%s",s2.name);
    printf("Enter marks of student 2: ");
    scanf("%f",&s2.marks);

    printf("--Student 1--\n");
    printf("Rollno: %d\n",s1.rollno);
    printf("Name: %s\n",s1.name);
    printf("Marks: %.lf\n",s1.marks);
    printf("--Student 2--\n");
    printf("Rollno: %d\n",s2.rollno);
    printf("Name: %s\n",s2.name);
    printf("Marks: %.lf\n",s2.marks);
    return 0;
}