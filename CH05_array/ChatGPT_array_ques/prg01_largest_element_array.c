#include<stdio.h>
void main(){
    int a[50],n,i,max;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for (i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(i=0; i<n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    printf("Largest Element: %d",max);
}