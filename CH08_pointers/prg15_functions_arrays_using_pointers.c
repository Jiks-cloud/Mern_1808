#include<stdio.h>
int i;
void printarr(int *a,int size){
    for(i=0; i<size; i++){
        printf("%d ",*(a+i));
    }
}
int main(){
    int num[100],n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=0; i<n; i++){
        scanf("%d",&num[i]);
    }
    printarr(num,n);
    return 0;
}