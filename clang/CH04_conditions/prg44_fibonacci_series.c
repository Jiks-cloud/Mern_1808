#include<stdio.h>
void main(){
    int i,n,a=0,b=1,next;
    printf("Enter the number for loop:");
    scanf("%d",&n);

    printf("Fibonacci series: ");
    for(i=0 ; i<=n ;i++){
        printf(" %d ",a);
        next = a+b;
        a = b;
        b = next; 
    }
}