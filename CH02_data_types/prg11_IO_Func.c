#include<stdio.h>
// I/O function of scanf and printf

void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    num = num + 1050;
    printf("New number: %d\n",num);
}