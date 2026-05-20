#include<stdio.h>
void main(){
    int n,count = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0){
        n/=10;
        count++;
    }
    printf("Digits: %d",count);
}
