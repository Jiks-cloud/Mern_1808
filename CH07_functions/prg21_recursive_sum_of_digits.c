#include<stdio.h>
int singleDigitSum(int n){
    int sum = 0;
    while(n > 0){
        sum = sum + n%10;
        n = n/10;
    }
    if(sum<10){
        return sum;
    }
    else{
        return singleDigitSum(sum);
    }
}
void main(){
    int num,sdsum;
    printf("Enter a number: ");
    scanf("%d",&num);
    sdsum = singleDigitSum(num);
    printf("Final Single Digit Sum of %d : %d",num,sdsum);
}