#include<stdio.h>
void main(){
    int i;
    printf("Enter the number : ");
    scanf("%d",&i);
    printf("during post-increment : %d\n",i++);
    printf(" after post-increment : %d\n",i);
    printf("\n-----------------------\n\n");
    printf(" during pre-increment : %d\n",++i);
    printf(" after pre-increment : %d\n",i);
}