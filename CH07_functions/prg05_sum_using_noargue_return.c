#include<stdio.h>
#include<conio.h>
int sum(){
    int a,b,c;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    c=a+b;
    return c;
}
void main(){
    int ans;
    ans = sum();
    printf("Answer : %d\n",ans);
}