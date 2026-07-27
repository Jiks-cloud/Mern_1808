#include<stdio.h>
struct student{
    int rollno;
    char name[100];
    float marks;
};
int main(){
    struct student s1 = {101,"CAMERON",920.0};
    struct student *p = &s1;

    printf("Roll No: %d\n",p->rollno);
    printf("Name: %s\n",p->name);
    printf("Marks: %.2lf\n",p->marks);

    return 0;
}