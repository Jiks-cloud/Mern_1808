#include<stdio.h>
void main(){
    int a[50],n,i,min;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    min = a[0];
    for(i=0; i<n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    printf("Samllest Element: %d",min);
}