#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("student.txt","a");
    fprintf(fp,"\nWelcome to computer!!");
    printf("New text added in file!!");
    fclose(fp);
    return 0;
}