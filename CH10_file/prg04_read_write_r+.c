#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("student1.txt","r+");
    fprintf(fp,"Updated Data!!");
    if(fp == NULL){
        printf("File not found!!");
    }
    else{
        printf("File opened and updated...");
    }
    fclose(fp);
    return 0;
}