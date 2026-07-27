#include<stdio.h>
#include<string.h>
struct Student {
    int rollno;
    char name[100];
    float marks;
};
union Stdnt{
    int rollno;
    char name[100];
    float marks;
};

int main(){
    struct Student s = {101,"Hello",85};
    printf("Structure:\n");
    printf("Rollno: %d\n",s.rollno);
    printf("Name: %s\n",s.name);
    printf("Marks: %.2lf\n",s.marks);
    printf("\n");

    union Stdnt st;
    st.rollno = 101;
    printf("Integer: %d\n",st.rollno);
    st.marks = 85;
    printf("Float: %.2lf\n",st.marks);
    strcpy(st.name,"Hello");
    printf("String: %s\n",st.name);
    printf("Union:\n");
    printf("Integer: %d\tFloat: %.2lf\tString: %s",st.rollno,st.marks,st.name);
    return 0;
}