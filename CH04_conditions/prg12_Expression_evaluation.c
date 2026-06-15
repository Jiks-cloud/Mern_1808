// Expression evaluation (a+=(a*=2))

#include<stdio.h>
void main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    a+=(a*=2);

    printf("Solution is %d",a);
}