#include<stdio.h>
void main(){
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d, %d",&a,&b);
    if(a==b){
        printf("%d is equal to %d\n",a,b);
    }
    else{
        printf("%d is not equal to %d\n",a,b);
    }

    if(a!=b){
        printf("%d is not equal to %d\n",a,b);
    }
    else{
        printf("%d is equal to %d\n",a,b);
    }
}