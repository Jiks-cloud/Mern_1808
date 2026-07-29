#include<stdio.h>
int main(){
    int a[100],n,i;
    int *p = a;
    int sum = 0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        sum += *(p+i);
    }
    printf("Sum of Array: %d\n",sum);
    return 0;
}