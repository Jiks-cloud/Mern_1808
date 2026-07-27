#include<stdio.h>
void increment(double *salary){
    double bonus;
    printf("Enter bonus: ");
    scanf("%lf",&bonus);
    *salary = *salary + bonus;
    printf("Salary in function:%2.lf\n",*salary);
}
void main(){
    double sal;
    printf("Enter your salary: ");
    scanf("%lf",&sal);
    printf("Salary before function:%2.lf\n",sal);
    increment(&sal);
    printf("Salary after function:%2.lf\n",sal);
}