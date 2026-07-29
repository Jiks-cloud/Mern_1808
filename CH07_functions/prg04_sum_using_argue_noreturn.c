#include<stdio.h>
void sum(int x, int y){
    int z;
    z = x + y;
    printf("%d + %d = %d\n",x,y,z);
}
void main(){
    int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    sum(a,b);
    
}