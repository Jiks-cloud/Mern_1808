#include<stdio.h>
void main(){
    int a[100][100],i,j,n,m,larg;
    printf("Enter size of array:");
    scanf("%d*%d",&n,&m);
    printf("Enter array elements:");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf(" %2d ",a[i][j]);
        }
        printf("\n");
    }
    larg = a[0][0];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if (a[i][j]>larg){
                larg = a[i][j];
            }
        }
    }
    printf("\nLargest number: %d",larg);
}