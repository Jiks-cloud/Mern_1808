#include<stdio.h>
#include<string.h>
void main(){
    char pass[200];
    char input[200];
    int status;
    printf("Enter password: ");
    scanf("%s",&pass);
    printf("Enter confirm password: ");
    scanf("%s",&input);
    status = strcmp(input,pass);
    printf("Status: %d\n",status);
    if(!status){
        printf("\nLOGIN SUCCESSFUL!!\n");
    }
    else{
        printf("\nLOGIN FAILED!!\n");
    }
}