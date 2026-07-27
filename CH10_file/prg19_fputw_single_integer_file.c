#include<stdio.h>
int main(){
    FILE *fp;
    int num;
    fp = fopen("numbers.txt", "w");
    if (fp == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter a number:");
    scanf("%d",&num);
    fprintf(fp,"%d", num);
    printf("Integer written successfully.\n");
    fclose(fp);
    return 0;
}