#include<stdio.h>
int main(){
    int a[100],i,n;
    int *p=a;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        printf("%d ",*(p+i));
    }
    return 0;
}