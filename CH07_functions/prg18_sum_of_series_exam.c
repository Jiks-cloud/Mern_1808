#include<stdio.h>
int sumOfSeries(int n){
    if(n == 0){
        return 0;
    }
    return n+sumOfSeries(n-1);
}
void main(){
    int num,sum;
    printf("Enter a number: ");
    scanf("%d",&num);
    sum = sumOfSeries(num);
    printf("Sum of Series till %d : %d",num,sum);
}