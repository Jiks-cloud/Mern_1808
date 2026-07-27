#include<stdio.h>
void swap(int *a,int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void main(){
    int a,b;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);
    printf("a: %d\tb: %d\n",a,b);
    swap(&a,&b);
    printf("a: %d\tb: %d\n",a,b);
}