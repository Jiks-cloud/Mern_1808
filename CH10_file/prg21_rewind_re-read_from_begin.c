#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    fp = fopen("newfile.txt", "r");
    if(fp == NULL){
        printf("Error opening file!!");
        return 1;
    }
    printf("First read:\n");
    while((ch = fgetc(fp)) != EOF){
        putchar(ch);
    }
    rewind(fp);
    printf("\n\nSecond read after rewind:\n");
    while((ch = fgetc(fp)) != EOF){
        putchar(ch);
    }
    fclose(fp);
    return 0;
}