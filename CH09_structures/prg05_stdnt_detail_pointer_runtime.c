#include<stdio.h>
struct student{
    int rollno;
    char name[100];
    float marks;
};
int main(){
    struct student s1;
    struct student *p = &s1;
    printf("Enter rollno of Student 1: ");
    scanf("%d",&s1.rollno);
    printf("Enter name of Student 1: ");
    scanf("%s",s1.name);
    printf("Enter marks of Student 1: ");
    scanf("%f",&s1.marks);

    printf("Roll No: %d\n",p->rollno);
    printf("Name: %s\n",p->name);
    printf("Marks: %.2lf\n",p->marks);

    return 0;
}