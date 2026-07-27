#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("newfile.txt","w");
    if(fp == NULL){
        printf("Error opening File!!");
        return 1;
    }
    fputc('A',fp);
    printf("Character added succesfully!!");
    fclose(fp);
    return 0;
}