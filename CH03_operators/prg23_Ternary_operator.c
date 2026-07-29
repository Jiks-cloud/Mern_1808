#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the number 1: ");
    scanf("%d",&a);
    printf("Enter the number 2: ");
    scanf("%d",&b);
    int min = (a<b)?a:b;
    printf("The Minimum: %d\n",min);
    int max = (a>b)?a:b;
    printf("The Maximum: %d\n",max);
}