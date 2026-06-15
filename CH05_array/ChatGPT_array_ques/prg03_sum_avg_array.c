#include<stdio.h>
void main(){
    int a[50],i,n,sum = 0,avg;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        sum = sum + a[i];
    }
    avg = sum / n;
    printf("Sum of elements in array: %d\n",sum);
    printf("Average of elements in array: %d",avg);
}