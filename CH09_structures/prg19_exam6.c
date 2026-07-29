#include<stdio.h>
struct Student {
    int rollno;
    char name[100];
    float marks;
};
int main(){
    struct Student s;
    struct Student *p = &s;
    printf("Enter roll no of Student: ");
    scanf("%d",&p->rollno);
    printf("Enter name of Student: ");
    scanf("%s",p->name);
    printf("Enter marks of Student: ");
    scanf("%f",&p->marks);

    printf("---Student Details---\n");
    printf("Rollno: %d\n",p->rollno);
    printf("Name: %s\n",p->name);
    printf("Marks: %.2lf\n",p->marks);
    return 0;
}