#include<stdio.h>
struct student{
    int rollno;
    char name[100];
    float marks;
};
int main(){
    struct student s[100];
    int n,i,rno;
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("Enter rollno of student %d: ",i+1);
        scanf("%d",&s[i].rollno);
        printf("Enter name of student %d: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter marks of student %d: ",i+1);
        scanf("%f",&s[i].marks);
    }
    printf("Enter rollno to find details: ");
    scanf("%d",&rno);

    printf("\n--Student Details--\n");
    for(i=0; i<n; i++){
        if(s[i].rollno == rno){
            printf("Rollno: %d\n",s[i].rollno);
            printf("Name: %s\n",s[i].name);
            printf("Marks: %.2lf\n",s[i].marks);
        }
        else{
            printf("There is no details of this number!!..");
            break;
        }
    }
    return 0;
}