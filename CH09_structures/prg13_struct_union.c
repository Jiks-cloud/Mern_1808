#include<stdio.h>
#include<string.h>
struct Student{
    int rollno;
    char name[100];
    float marks;
};
union Data{
    int i;
    float f;
    char str[100];
};
int main(){
    struct Student s;
    printf("Enter rollno of Student: ");
    scanf("%d",&s.rollno);
    printf("Enter name of Student: ");
    scanf("%s",s.name);
    printf("Enter marks of Student: ");
    scanf("%f",&s.marks);
    union Data d;
    printf("Structure: %d, %s, %.2f\n", s.rollno, s.name, s.marks);
    d.i = 10;
    d.f = 98.5;
    strcpy(d.str, "Hello");
    printf("Union str: %s\n", d.str);
    printf("Union int: %d\n", d.i);
    printf("Union float: %.2f\n", d.f);
    
    return 0;
}
