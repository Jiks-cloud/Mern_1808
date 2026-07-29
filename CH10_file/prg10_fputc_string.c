#include<stdio.h>
int main(){
    FILE *fp;
    char str[100];
    int i=0;
    fp = fopen("newfile.txt","w");
    if(fp == NULL){
        printf("Error opening file!!");
        return 1;
    }
    printf("Enter string to enter in file: ");
    scanf("%s",str);
    while(str[i] != '\0'){
        fputc(str[i],fp);
        i++;
    }
    printf("Text %s added to file!!",str);
    fclose(fp);
    return 0;
}