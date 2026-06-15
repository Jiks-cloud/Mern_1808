#include<stdio.h>
void main(){
    int a[50],n,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements of array:");
    for (i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("---Reversse Array---\n");
    for(i=n-1; i>=0; i--){
        printf(" %d ",a[i]);
    }
}