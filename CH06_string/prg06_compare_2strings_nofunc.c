#include<stdio.h>
void main(){
    char pass[200];
    char input[200];
    int status,i;
    printf("Enter password:");
    scanf("%d",&pass);
    printf("Enter Confirm password:");
    scanf("%d",&input);
    for(i=0; input[i]; i++){
        if(pass[i] != input[i]){
            status = pass[i] - input[i];
            break;
        }
    }
    if(!status){
        printf("\nLOGIN SUCCESSFUL!!\n");
    }
    else{
        printf("\nLOGIN FAILED!!\n");
    }
}