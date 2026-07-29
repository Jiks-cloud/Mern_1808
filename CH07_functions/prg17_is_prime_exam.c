#include<stdio.h>
int isPrime(int n){
    int i;
    if(n<=1){
        return 0;
    }
    for(i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
void main(){
    int a,b,i;
    printf("Enter a starting number: ");
    scanf("%d",&a);
    printf("Enter a ending number: ");
    scanf("%d",&b);
    printf("Prime numbers between %d and %d : ",a,b);
    for(i=a; i<=b; i++){
        if(isPrime(i)){
            printf(" %d ",i);
        }
    }
}