#include<stdio.h>
void main(){
    int a,marks;
    printf("Enter marks: ");
    scanf("%d",&a);

    marks=((a>=33)&&(a<=100))?printf("Pass: %d marks",a):printf("Fail: %d marks",a);

}