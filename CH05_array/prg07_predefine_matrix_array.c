#include<stdio.h>
void main(){
    int i,j;
    int matrix[3][3]={{25,36,45},{14,38,95},{78,15,58}};
    printf("MATRIX\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}