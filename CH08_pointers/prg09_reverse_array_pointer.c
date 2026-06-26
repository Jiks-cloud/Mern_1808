#include <stdio.h>
int main() {
    int a[100],i,n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for (i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int *p = a + (n-1);
    printf("Array in reverse:\n");
    for (i=0; i<n; i++) {
        printf("%d ", *p);
        p--;
    }
    return 0;
}