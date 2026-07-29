#include<stdio.h>
void main(){
    int i,j,m,n,matrix[50][50];
    printf("Enter number of rows - columns: ");
    scanf("%d * %d",&n,&m);
    printf("Enter Matrix: \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n------MATRIX------\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf(" %d ",matrix[i][j]);
        }
        printf("\n");
    }
}