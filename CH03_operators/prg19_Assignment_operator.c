#include<stdio.h>
void main(){
    int a,b;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);

    a+=b; //a = a+b;
    printf("value of a after += : %d\n",a);

    // a*=b; //a = a*b;
    // printf("value of a after *= : %d\n",a);

    // a<<=b; //a = a<<b;
    // printf("value of a after <<= : %d\n",a);

    // a>>=b; //a = a&b;
    // printf("value of a after >>= : %d\n",a);

    // a%=10; //a = a%10;
    // printf("value of a after %%= : %d\n",a);
}