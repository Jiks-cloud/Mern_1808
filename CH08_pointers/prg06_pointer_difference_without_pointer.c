#include<stdio.h>
#include<conio.h>
int main(){
    int a[100],n,i,p1,p2,p;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter index of array for difference: ");
    scanf("%d",&p1);
    printf("Enter index of array to difference: ");
    scanf("%d",&p2);
    
    printf("No. of elements between %d and %d is: %d",p1,p2,p);
}