#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("student.txt","w");
    if(fp == NULL){
        printf("Error opening file!!");
        return 1;
    }
    fprintf(fp,"Hello Students!!\n");
    fprintf(fp,"Welcome to c programming!!");
    printf("Data written successfullyy!!");
    fclose(fp);
    return 0;
}