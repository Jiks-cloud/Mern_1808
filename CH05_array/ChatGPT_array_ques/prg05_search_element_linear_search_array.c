#include<stdio.h>
void main(){
    int a[100],n,i,key,found=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter to find :");
    scanf("%d",&key);
    for(i=0; i<n; i++){
        if (a[i] == key){
            found = 1;
            break;
        }
    }
    if(found){
        printf("FOUND!!!");
    }else{
        printf("NOT FOUND!!!");
    }
}