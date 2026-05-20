#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);

    c=a%b;
    
    printf("Result: %d %% %d = %d\n",a,b,c);
}