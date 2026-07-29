#include<stdio.h>
void main(){
    int i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0 ; i<=n ; i+=2){
        printf("%d ",i);
    }
}