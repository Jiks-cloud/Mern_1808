#include<stdio.h>
void main(){
    int a[50][50],b[50][50],c[50][50];
    int i,j,m,n;
    printf("Enter no. of rows and columns: ");
    scanf("%d*%d",&n,&m);
    printf("-----MATRIX A-----\n");
    for (i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("-----MATRIX B-----\n");
    for (i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    for (i=0; i<n; i++){
        for(j=0; j<m; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("-----MATRIX C-----\n");
    for (i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
    
}