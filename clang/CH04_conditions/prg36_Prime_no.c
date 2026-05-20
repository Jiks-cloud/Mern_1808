#include<stdio.h>
void main(){
    int i,n,count=0;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=2 ; i<n ; i++){
        if(n % i == 0){
            count = 1;
            break;
        }
    }
    if(count==0){
        printf("%d is Prime Number",n);
    }
    else{
        printf("%d is not Prime Number",n);
    }
}