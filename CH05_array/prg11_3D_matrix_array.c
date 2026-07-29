#include<stdio.h>
void main(){
    int a[50][50][50], i,j,k,m,n,o;
    printf("Enter no. of rows columns and table: ");
    scanf("%d*%d*%d",&o,&n,&m);
    printf("---------3D---------\n");
    for(i=0; i<o; i++){
        for(j=0; j<n; j++){
            for(k=0; k<m; k++){
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    printf("-----------------------\n");
    for(i=0; i<o; i++){
        for(j=0; j<n; j++){
            for(k=0; k<m; k++){
                printf(" %2d ",a[i][j][k]);
            }
            printf("\n");
        }
        printf("-------\n");
    }
}