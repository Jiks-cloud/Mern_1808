#include<stdio.h>
void main(){
    int n, rem, sum=0, count=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n>0){
        rem = n%10;
        sum = rem+n;
        count++;
    }
    printf("Sum of number %d: is %d",n,sum);
}
