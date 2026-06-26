#include<stdio.h>
int n,i;
int max(int a[]){
    int x = a[0];
    for(i=0; i<n; i++){
        if(x < a[i]){
            x = a[i];
        }
    }
    return x;
}
void main(){
    int arr[100], maxi;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    maxi = max(arr);
    printf("MAXIMUM from ARRAY is: %d\n",maxi);
}