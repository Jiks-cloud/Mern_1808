#include<stdio.h>
struct Student{
    int rollno;
    char name[100];
    float marks;
};
void display(struct Student s){
    printf("Roll No: %d\n",s.rollno);
    printf("Name: %s\n",s.name);
    printf("Marks: %.2lf\n",s.marks);
}
int main(){
    struct Student st;
    printf("Enter roll no of student: ");
    scanf("%d",&st.rollno);
    printf("Enter name of student: ");
    scanf("%s",st.name);
    printf("Enter marks of student: ");
    scanf("%f",&st.marks);
    printf("\n----STUDENT DETAILS----\n");
    display(st);
    return 0;
}