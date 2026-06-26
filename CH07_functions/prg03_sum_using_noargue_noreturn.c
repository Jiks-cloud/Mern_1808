#include<stdio.h>
void sum(){
    int a,b,c;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    c = a + b;
    printf("\n %d + %d = %d\n",a,b,c);
}
void main(){
    sum();
}