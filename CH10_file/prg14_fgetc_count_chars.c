#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    int count=0;
    fp = fopen("newfile1.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!!");
        return 1;
    }
    
    while ((ch = fgetc(fp)) != EOF) {
        count++;
    }
    fclose(fp);
    printf("Total characters in file: %d\n",count);
    return 0;
}