#include<stdio.h>
void main(){
    int a[100];
    int n,i;
    printf("Enter the array:");
    scanf("%d",&n);
    printf("Enter the data: ");
    for(i=0;i<n;i++){
        printf("enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("-----------------\n");
    for(i=0;i<n;i++){
        printf("a[%d]: %d \n",i,a[i]);
    }
}