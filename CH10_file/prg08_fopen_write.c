#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("newfile1.txt","w");
    if(fp == NULL){
        printf("Fle not found!!\n");
        return 1;
    }
    else{
        printf("File opened Successfully!!");
    }
    fclose(fp);
    return 0;
}