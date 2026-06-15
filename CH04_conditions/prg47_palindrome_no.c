#include<stdio.h>
void main(){
    int n,temp,pal=0,rem;
    printf("Enter the number:");
    scanf("%d",&n);
    temp = n;
    while (n>0){
        rem = n % 10;
        pal = pal * 10 + rem;
        n = n / 10;
    }
    if(temp == pal){
        printf("%d is an PALINDROME number\n",temp);
    }
    else{
        printf("%d is not an PALINDROME number\n",temp);
    }
}