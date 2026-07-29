#include<stdio.h>
int main(){
    int a[100],*p1,*p2,n,i,i1,i2;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter first index value of array: ");
    scanf("%d",&i1);
    printf("Enter second index value to array: ");
    scanf("%d",&i2);
    p1 = &a[i2];
    p2 = &a[i1];
    printf("Difference: %d\n", p1 - p2);
}