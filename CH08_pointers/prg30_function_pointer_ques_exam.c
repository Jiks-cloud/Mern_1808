#include<stdio.h>
int i;
void arrange(int *arr, int size){
    int temp[size];
    int *p = arr;
    int k=0;
    for(i=0; i<size; i++){
        if(*(p+i)<0){
            temp[k++] = *(p+i);
        }
    }
    for(i=0; i<size; i++){
        if(*(p+i)>=0){
            temp[k++] = *(p+i);
        }
    }
    for(i=0; i<size; i++){
        *(p+i) = temp[i];
    }
}
void main(){
    int a[100],n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    arrange(a,n);
    printf("Output...:\n");
    for(i=0; i<n; i++){
        printf(" %d ",a[i]);
    }
}