#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    int n;
    fp = fopen("newfile.txt","w+");
    if(fp == NULL){
        printf("Error opening file!!");
        return 1;
    }
    fputs("ABCDEFGHIJKLMNOPQRSTUVWXYZ..",fp);
    printf("Enter number to seek to particular index: ");
    scanf("%d",&n);
    printf("Enter character to replace at particular index: ");
    scanf(" %c",&ch);

    fseek(fp, n, SEEK_SET);
    fputc( ch ,fp);

    printf("Character at %d position: %c is replaced\n",n,ch);
    fclose(fp);
    printf("File modified successfully!!");
    return 0;
}