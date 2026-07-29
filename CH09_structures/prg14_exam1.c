#include<stdio.h>
struct Student{
    int rollno;
    char name[100];
    float marks;
};
int main(){
    struct Student s;
    printf("Enter Student's Rollno: ");
    scanf("%d",&s.rollno);
    printf("Enter Student's Name: ");
    scanf("%s",s.name);
    printf("Enter Student's Marks: ");
    scanf("%f",&s.marks);

    printf("----STUDENT DETAILS----\n");
    printf("Roll No: %d\n",s.rollno);
    printf("Name: %s\n",s.name);
    printf("Marks: %.2lf\n",s.marks);

    return 0;
}