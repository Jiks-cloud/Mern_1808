#include<stdio.h>
int main(){
    FILE *fp;
    int i,num[100],n;
    fp = fopen("numbers.txt","w");
    if(fp == NULL){
        printf("Error opening file!!");
        return 1;
    }
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++){
        scanf("%d",&num[i]);
    }
    for(i=0; i<n; i++){
        fprintf(fp,"%d\n",num[i]);
    }
    printf("All integers written successfully!!!");
    fclose(fp);
    return 0;
}