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
    struct Student s1 = {101,"Cameron",45};
    printf("Before update : %.2lf\n",s1.marks);
    updatemarks(&s1,95);
    printf("After update: %.2lf\n",s1.marks);
}