#include<stdio.h>
struct student{
    int rollno;
    char name[100];
    float marks;
};
int main(){
    struct student st[3] = {
        {101,"CAMERON",750},
        {102,"ROWAN",820},
        {103,"NERO",790}
    };
    for(int i=0; i<3; i++){
        printf("--Student %d--\n",i+1);
        printf("Roll no: %d\n",st[i].rollno);
        printf("Name: %s\n",st[i].name);
        printf("Marks: %.2lf\n",st[i].marks);
    }
}
