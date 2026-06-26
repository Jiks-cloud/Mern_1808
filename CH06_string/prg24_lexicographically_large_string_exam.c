#include<stdio.h>
#include<string.h>
void main(){
    char st1[100],st2[100],st3[100],large[100];
    printf("Enter a string 1: ");
    scanf("%s",st1);
    printf("Enter a string 2: ");
    scanf("%s",st2);
    printf("Enter a string 3: "); 
    scanf("%s",st3);

    strcpy(large,st1);
    if (strcmp(st2,large)>0){
        strcpy(large,st2);
    }
    if(strcmp(st3,large)>0){
        strcpy(large,st3);
    }
    printf("Largest String is %s",large);
}