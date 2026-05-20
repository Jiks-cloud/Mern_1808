#include<stdio.h>
void main(){
    int a,b;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);

    if(a>0 && b>0){
        printf("Both numbers %d and %d are positive",a,b);
    }
    else{
        printf("Both numbers %d and %d are not positive",a,b);
    }
}