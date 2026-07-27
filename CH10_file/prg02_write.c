#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("student.txt","w");
    fprintf(fp,"Hello Students!!");
    printf("Text added in file!!..");
    fclose(fp);
    return 0;
}