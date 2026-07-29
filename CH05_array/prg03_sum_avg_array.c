#include<stdio.h>
void main(){
    int a[100];
    float sum=0, avg;
    int i,n;
    printf("Enter the size:");
    scanf("%d",&n);

    printf("Enter the data: \n");
    for(i=0;i<n;i++){
        printf("Enter a[%d]= ",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("\nThe array: \n");
    for(i=0;i<n;i++){
        printf("a[%d] = %d\n", i,a[i]);
    }
    printf("\nSum of array: %.2f",sum);
    printf("\nAverage of array: %.2f",avg);
}