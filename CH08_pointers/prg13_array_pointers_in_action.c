#include<stdio.h>
int main(){
    int a[100],i,n;
    int *p = a;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Address of first element: %p\n",a);
    printf("Address stored in pointer p: %p\n",p);
    printf("Value of first element using pointer: %d\n",*p);
    return 0;
}