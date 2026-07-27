#include<stdio.h>

#define Max(a,b) ((a>b)?a:b)

int main(){
    int a,b;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);

    printf("Maximum of %d and %d is: %d\n",a,b,Max(a,b));

    return 0;
}