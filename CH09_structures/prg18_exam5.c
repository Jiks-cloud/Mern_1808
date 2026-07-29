#include<stdio.h>
struct Student{
    int rollno;
    char name[100];
    float marks;
};
void updatemarks(struct Student *s, float newmarks){
    s->marks = newmarks;
}
int main(){
    struct Student st;
    float n_marks;
    printf("Enter rollno of Student: ");
    scanf("%d",&st.rollno);
    printf("Enter name of Student: ");
    scanf("%s",&st.name);
    printf("Enter marks of Student: ");
    scanf("%f",&st.marks);
    printf("Enter new marks of Student: ");
    scanf("%f",&n_marks);
    printf("\nBefore update : %.2lf\n",st.marks);
    updatemarks(&st,n_marks);
    printf("\nAfter update: %.2lf\n",st.marks);
    return 0;
}