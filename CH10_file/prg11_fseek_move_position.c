#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    int n;
    fp = fopen("newfile.txt","r");
    if(fp == NULL){
        printf("Error opening file!!");
        return 1;
    }
    printf("Enter number to seek to particular index: ");
    scanf("%d",&n);
    fseek(fp, n, SEEK_SET);

    ch = fgetc(fp);
    printf("Character at %d position: %c\n",n,ch);
    fclose(fp);
    return 0;
}