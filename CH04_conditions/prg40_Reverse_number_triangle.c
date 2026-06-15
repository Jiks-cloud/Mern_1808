#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=n ; i>0 ; i--){
        for(j=i ; j>0 ; j--){
            printf(" %d ",j);
        }
        printf("\n");
    }
}