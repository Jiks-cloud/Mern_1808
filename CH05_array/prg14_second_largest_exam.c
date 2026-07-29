#include <stdio.h>
void main(){
    int a[50],n,i,sec_largest,largest;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    largest = sec_largest = a[0];
    for(i=0; i<n; i++){
        if(a[i] > largest){
            sec_largest = largest;
            largest = a[i];
        }
        else if (a[i] > sec_largest && a[i] != largest){
            sec_largest = a[i];
        }
    }
    printf("Second Largest number is : %d",sec_largest);
}