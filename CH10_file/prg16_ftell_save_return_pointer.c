#include<stdio.h>
int main(){
    FILE *fp;
    long pos;
    char ch;
    fp = fopen("newfile1.txt","r");
    if(fp == NULL){
        printf("Error opening file!!");
        return 1;
    }
    printf("Enter the number for pointer to move in position: ");
    scanf("%ld",&pos);
    ch = fgetc(fp);
    if(ch != EOF){
        printf("Character at position %ld = %c\n",pos,ch);
        printf("Current file pointer position: %ld\n",pos);
    }
    fseek(fp,pos,SEEK_SET);
    printf("File pointer returned to position: %ld\n",ftell(fp));
    fclose(fp);
    return 0;
}