#include<stdio.h>
#include<stdlib.h>
void main(){
    int *p,n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the elements of array: ");
    
    p = malloc(n * sizeof(int));
    for(i=0; i<n; i++){
        scanf("%d",(p+i));
    }

    printf("----------\n");
    for(i=0; i<n; i++){
        printf("%d\n",*(p+i));
    }
}