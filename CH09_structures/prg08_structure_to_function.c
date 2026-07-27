#include<stdio.h>
struct Student{
    int rollno;
    char name[100];
    float marks;
};
void display(struct Student s){
    printf("Rollno: %d\n",s.rollno);
    printf("Name: %s\n",s.name);
    printf("Marks: %.2lf\n",s.marks);
}
int main(){
    struct Student s1 = {101,"Cameron",82};
    display(s1);
    return 0;
}