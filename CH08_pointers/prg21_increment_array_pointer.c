#include<stdio.h>
int i;
void increment(int *a,int size){
    int n;
    printf("\nEnter to increase in array:");
    scanf("%d",&n);
    for(i=0; i<size; i++){
        *(a+i) += n;
    }
}
void main(){
    int num[100],no,c;
    printf("Enter size of array: ");
    scanf("%d",&no);
    printf("Enter elements of array: ");
    for(i=0; i<no; i++){
        scanf("%d",&num[i]);
    }
    printf("Array before increment: ");
    for(i=0; i<no; i++){
        printf("%2d ",num[i]);
    }
    while(c == 1){
        increment(num,no);
        printf("Array after increment: ");
        for(i=0; i<no; i++){
            printf("%2d ",num[i]);
        }
        printf("\nDo u want increment again? (1 == Yes and 2 == No):");
        scanf("%d",&c);
    }
    
}