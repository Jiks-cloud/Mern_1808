#include<stdio.h>
void main(){
    int i,n;
    long fac=1;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++){
        fac *= i;
    }
    printf("Factorail of %d! : %ld",n,fac);
}