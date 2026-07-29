#include<stdio.h>
void main(){
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d, %d",&a,&b);
    if(a>b){
        printf("a is maximum: %d\n",a);
    }
    else{
        printf("b is maximum: %d\n",b);
    }
}