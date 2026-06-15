#include<stdio.h>
void main(){
    int a[100],i,j,n,flag;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("-----Array after removing duplicates-----\n");
    for(i=0; i<n; i++){
        flag = 0;
        for(j=0; j<i; j++){
            if(a[i]==a[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            printf("%d\n",a[i]);
        }
    }
}