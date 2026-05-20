#include<stdio.h>
void main(){
    int a,b,c,sol;
    printf("Enter number 1:");
    scanf("%d",&a);
    printf("Enter number 2:");
    scanf("%d",&b);
    printf("Enter number 3:");
    scanf("%d",&c);
    
    sol=( a + b ) * c;
    printf (" SOLUTION IS %d \n",sol);

    c*=( a + b );
    printf (" SOLUTION IS %d",c);
}