#include<stdio.h>
// Get sum of 2 numbers by scanf
void main(){
    int a,b,ans;
    printf("Enter numbers: ");
    scanf("%d %d",&a,&b);
    ans = a + b;
    printf("Answer is: %d",ans);
}