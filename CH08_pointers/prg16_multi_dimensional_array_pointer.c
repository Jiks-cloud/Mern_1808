#include<stdio.h>
int main(){
    int a[100][100],i,j,n,m;
    printf("Enter size of rows: ");
    scanf("%d",&n);
    printf("Enter szie of columns: ");
    scanf("%d",&m);
    int (*p)[100] = a;
    printf("Enter elements of array: ");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("MULTIDIMENSIONAL ARRAY: \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf(" %d ",*(*(p+i)+j));
        }
        printf("\n");
    }
}