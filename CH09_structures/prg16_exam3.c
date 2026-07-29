#include<stdio.h>
struct Student{
    int rollno;
    char name[100];
    float marks;
};
int main(){
    struct Student s[100];
    int n,i;
    float sum,avg;

    printf("Enter number of student: ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        printf("Enter rollno of Student %d: ",i+1);
        scanf("%d",&s[i].rollno);
        printf("Enter name of Student %d: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter marks of Student %d: ",i+1);
        scanf("%f",&s[i].marks);
    }
    printf("\n");
    for(i=0; i<n; i++){
        printf("Marks of %s with rn %d : %.2lf\n",s[i].name,s[i].rollno,s[i].marks);
        sum += s[i].marks;
    }
    avg = sum/n;
    printf("Sum of %d number of marks of Students is: %.2lf\n",n,sum);
    printf("Average of %d number of marks of Students is: %.2lf\n",n,avg);
    return 0;
}