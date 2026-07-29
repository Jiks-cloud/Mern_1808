#include<stdio.h>
void main(){
    int i, j, n, a[100], temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter array:\n");
    for(i=0; i<n; i++){
        printf("Enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nSorted Array:");
    for (i=0; i<n; i++){
        printf("\na[%d] : %d",i,a[i]);
    }
}