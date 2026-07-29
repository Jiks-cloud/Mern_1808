#include<stdio.h>
void main(){
    int a[50][50][50],i,j,k,n,m,o;
    printf("Enter no. of array rows and columns:");
    scanf("%d*%d*%d",&o,&n,&m);
    printf("Enter array elements:");
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
                printf(" %3d ",a[i][j][k]);
            }
            printf("\n");
        }
        printf("-------\n");
    }
}