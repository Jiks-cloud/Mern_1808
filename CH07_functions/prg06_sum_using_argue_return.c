#include<stdio.h>
int sum(int a, int b){
    int c;
    c = a+b;
    return c;
}
void main(){
    int x,y,z;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter value of y: ");
    scanf("%d",&y);
    z = sum(x,y);
    printf("%d + %d = %d\n",x,y,z);
}