#include<stdio.h>
void main(){
    int a[100],i,j,n,rev;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("----Array----\n");
    for(i=0; i<n; i++){
        printf(" %d ",a[i]);

    }
    printf("\n----REVERSED ARRAY----\n");
    for(i=n-1; i>=0; i--){
        printf(" %d ",a[i]);
    }
}