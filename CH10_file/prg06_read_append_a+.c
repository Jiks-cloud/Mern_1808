#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("student1.txt","a+");
    fprintf(fp,"\nAppended Data!!");
    rewind(fp);
    char ch;
    while ((ch = fgetc(fp))!=EOF){
        putchar(ch);
    }
    fclose(fp);
    return 0;
}