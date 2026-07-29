#include<stdio.h>
void main(){
    int a[100],i,n;
    int max=0, min=0;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter array:");
    for(i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    max = min = a[0];
    for(i=0 ; i<n ; i++ ){
        if(a[i] < min){
            min = a[i];
        }else if (a[i] > max){
            max = a[i];
        }
    }
    printf("Maximum number: %d",max);
    printf("\nMinimum number: %d",min);
}