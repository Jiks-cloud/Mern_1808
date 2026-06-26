#include<stdio.h>
void main(){
    char name[5][100] = {"Blake", "Cameron", "Gabrielle", "Meg", "Luke"};
    int i,n=5;
    printf("Students: \n");
    for(i=0; i<n; i++){
        printf("%s",name[i]);
        printf("\n");
    }
}