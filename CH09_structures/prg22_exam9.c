#include<stdio.h>
struct employee{
    int id;
    char name[100];
    float salary;
};
int main(){
    struct employee e[100];
    int n,i;
    printf("Enter number of employeess: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("Enter id of employee %d: ",i+1);
        scanf("%d",&e[i].id);
        printf("Enter name of employee %d: ",i+1);
        scanf("%s",e[i].name);
        printf("Enter salary of employee %d: ",i+1);
        scanf("%f",&e[i].salary);
    }
    printf("--Employee Details--\n");
    for(i=0; i<n; i++){
        printf("Employee %d\n",i+1);
        printf("ID: %d\n",e[i].id);
        printf("Name: %s\n",e[i].name);
        printf("Salary: %.2lf\n",e[i].salary);
    }
    return 0;
}