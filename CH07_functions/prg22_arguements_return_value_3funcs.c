#include<stdio.h>
int fact(int n){
    if(n == 1){
        return 1;
    }
    return n*fact(n-1);
}
int digitSum(int n){
    int dsum = 0;
    while(n>0){
        dsum = dsum + n % 10;
        n = n/10;
    }
    return dsum;
}
int isPalindrome(int n){
    int temp=n, rev=0;
    while(n>0){
        rev = rev * 10 + n % 10;
        n = n/10;
    }
    if(temp == rev){
        return 1;
    }
    else{
        return 0;
    }
}
void main(){
    int num,fac,sum,palindrome;
    printf("Enter a number: ");
    scanf("%d",&num);
    fac = fact(num);
    sum = digitSum(num);
    printf("FACTORIAL of %d: %d\n",num,fac);
    printf("SUM OF DIGITS of %d : %d\n",num,sum);
    if(isPalindrome(num)){
        printf("PALINDROME NUMBER....");
    }
    else{
        printf("NOT PALINDROME NUMBER....");
    }
}