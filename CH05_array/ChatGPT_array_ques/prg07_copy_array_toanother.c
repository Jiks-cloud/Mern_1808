#include<stdio.h>
void main(){
    int a[100],n,i,b[100];
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for (i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("---Array A---\n");
    for(i=0; i<n; i++){
        printf(" %d ",a[i]);
    }
    for(i=0; i<n; i++){
        b[i] = a[i];
    }
    printf("\n---Array B after copying---\n");
    for(i=0; i<n; i++){
        printf(" %d ",b[i]);
    }
}