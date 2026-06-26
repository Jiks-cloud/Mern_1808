#include<stdio.h>
void main(){
    char list[50][200];
    int i,n;
    printf("Enter number of Students : ");
    scanf("%d",&n);
    printf("Enter Name of Students: \n");
    for(i=0; i<n; i++){
        scanf("%s",list[i]);
    }

    printf("\n------ Students List ------\n");
    for(i=0; i<n; i++){
        printf("%s\n",list[i]);
    }
}