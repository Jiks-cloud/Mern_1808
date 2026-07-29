#include<stdio.h>
struct student{
    int rollno;
    char name[100];
    float marks;
};
int main(){
    struct student s[100];
    int n,i;
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("Enter rollno of Student [%d]: ",i+1);
        scanf("%d",&s[i].rollno);
        printf("Enter name of Student [%d]: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter marks of Student [%d]: ",i+1);
        scanf("%f",&s[i].marks);
    }
    printf("-----Student Deatils:-----");
    for(i=0; i<n; i++){
        printf("--Student %d--\n",i+1);
        printf("Roll no: %d\n",s[i].rollno);
        printf("Name: %s\n",s[i].name);
        printf("Marks: %.2lf\n",s[i].marks);
    }
}
