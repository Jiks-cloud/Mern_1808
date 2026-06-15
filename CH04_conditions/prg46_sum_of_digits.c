#include<stdio.h>
void main(){
    int n, rem, sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n!=0){
        rem = n%10;
        sum = sum + rem;
        n /= 10;
    }
    printf("Sum of number is %d",sum);
}