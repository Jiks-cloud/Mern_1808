#include<stdio.h>
void main(){
    int n, i, f=0, a[100], data;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter array:\n");
    for(i=0 ; i<n ; i++){
        printf("Enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter data to search: ");
    scanf("%d",&data);
    for(i=0 ; i<n ; i++){
        if (data == a[i]){
            printf("%d is found at %d index\n",data,i);
            f=1;
        }
    }
    if (!f){
        printf("Sorry, %d is not in array",data);
    }
    
}