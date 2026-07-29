#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b =temp;
}
void main(){
    int x,y;
    printf("Enter number 1: ");
    scanf("%d",&x);
    printf("Enter number 2: ");
    scanf("%d",&y);
    printf("x: %d\ty: %d\n",x,y);
    swap(&x,&y);
    printf("x: %d\ty: %d\n",x,y);
}