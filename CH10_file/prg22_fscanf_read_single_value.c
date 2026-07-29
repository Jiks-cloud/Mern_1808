#include<stdio.h>
int main(){
    FILE *fp;
    int num;
    fp = fopen("student1.txt","r");
    if(fp == NULL){
        printf("Error opening file!!");
        return 1;
    }
    char line[100];
    fgets(line, sizeof(line), fp);
    fgets(line, sizeof(line), fp);
    while(fscanf(fp,"%d",&num)==1){
        printf("Number read from file: %d\n",num);
    }
    fclose(fp);
    return 0;
}