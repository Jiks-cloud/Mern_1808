#include<stdio.h>
void main(){
    int a[5] = {23, 56, 65, 75, 84};
    int i;
    printf("Array of Data: \n");
    for (i = 0; i < 5; i++){
        printf("a[%d] : %d \n",i,a[i]);
    }
}