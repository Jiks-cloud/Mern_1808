#include<stdio.h>
#include<string.h>
void main(){
    char st1[100],st2[100];
    printf("Enter string 1: ");
    scanf("%s",&st1);
    printf("Enter string 2: ");
    scanf("%s",&st2);

    strcat(st1 , " ");
    strcat(st1 , st2);

    printf("String is: %s",st1);
}