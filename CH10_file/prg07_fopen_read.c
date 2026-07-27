#include<stdio.h>
int main(){
    FILE *fp,*fp1;
    fp = fopen("newfile.txt","r");
    if(fp == NULL){
        printf("File not found!\n");
        return 1;
    }else{
        printf("File Opened successfullyy!!");
    }
    fclose(fp);
    return 0;
}