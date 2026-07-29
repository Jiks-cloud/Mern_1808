#include<stdio.h>
#include<string.h>
struct student{
    int rollno;
    char name[100];
    float marks;
};
int main(){
    struct student s1 = {101,"Cameron",592};
    struct student s2;
    s2.rollno = 102;
    s2.marks = 532;
    strcpy(s2.name,"Rowan");
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