#include<stdio.h>
struct student{
    char name[100];
    int rollno;
    float marks;
};
int main(){
    struct student stdnt[3]={
        {"Cameron",101,85},
        {"Rowan",102,78},
        {"Nero",103,89}
    };
    struct student *p = stdnt;
    float sum = 0;
    for(int i=0; i<3; i++){
        printf("Marks of %s : %.2lf\n",(p+i)->name,(p+i)->marks);
        sum += (p+i)->marks;
    }
    float average = sum/3;
    printf("SUM of Marks: %.2lf\n",sum);
    printf("Avergae of marks: %.2lf",average);
}