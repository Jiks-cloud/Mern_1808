#include<stdio.h>
int countDigits(int n){
    if(n == 0){
        return 0;
    }
    return 1 + countDigits(n/10);
}
void main(){
    int num,count;
    printf("Enter a number: ");
    scanf("%d",&num);
    count = countDigits(num);
    printf("Count of a number %d : %d",num,count);
}
// Q1 (a) = 6 4 2 2 4 6
// Q1 (b) = 16
// Q1 (c) = 15 5