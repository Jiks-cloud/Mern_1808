#include<stdio.h>
void main(){
    int num,even_odd;
    printf("Enter a number:");
    scanf("%d",&num);

    even_odd=(num%2==0)?printf("Number is Even %d",num):printf("Number is Odd %d",num);
    
}