#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("student1.txt","w+");
    fprintf(fp,"Welcome!!");
    rewind(fp);
    char ch = fgetc(fp);
    printf("%c",ch);
    fclose(fp);
    return 0;
}