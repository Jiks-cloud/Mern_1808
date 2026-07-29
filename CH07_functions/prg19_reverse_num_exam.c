#include<stdio.h>
int reverseNum(int n){
    int rev=0;
    while(n>0){
        rev = rev*10 + n%10;
        n = n/10;
    }
    return rev;
}
void main(){
    int num,rev;
    printf("Enter a number: ");
    scanf("%d",&num);
    rev = reverseNum(num);
    printf("Reverse of %d : %d",num,rev);
}