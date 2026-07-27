#include<stdio.h>
int main(){
    int a[100],i,n,j;
    int *p=a;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int found=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(*(p+i)==*(p+j)){
                printf("First repeating elements: %d",*(p+i));
                found =1;
                return 0;
            }
        }
    }
    if(!found){
        printf("No repeating element!!");
    }
    return 0;
}