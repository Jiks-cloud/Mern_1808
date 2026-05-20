#include<stdio.h>
void main(){
    int i,n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0 ; i<=n ; i+=2){
        sum+=i;
    }
    printf("Sum of Even Numbers:");
    printf("%d ",sum);
}