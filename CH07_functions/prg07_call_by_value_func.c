#include<stdio.h>
void increment(double salary){
    int n;
    printf("Enter bonus to add on: ");
    scanf("%d",&n);
    salary += n;
    printf("Salary in function : %.2lf\n",salary);
}
void main(){
    double sal;
    printf("Enter your salary:");
    scanf("%lf",&sal);
    printf("\nSalary before function: %.2lf\n",sal);
    increment(sal);
    printf("Salary after function: %.2lf\n",sal);
}