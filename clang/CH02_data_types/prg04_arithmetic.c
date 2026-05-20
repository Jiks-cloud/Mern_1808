#include<stdio.h>
int a,b,c;
void main(){
    printf("Enter the value 1: ");
    scanf("%d",&a);
    printf("Enter the value 2: ");
    scanf("%d",&b);
    c=a+b;
    printf("\nAddition of %d and %d : %d",a,b,c);
    c=a-b;
    printf("\nSubtraction of %d and %d : %d",a,b,c);
    c=a*b;
    printf("\nMultiplication of %d and %d : %d",a,b,c);
    c=a/b;
    printf("\nDivision of %d and %d : %d",a,b,c);
}