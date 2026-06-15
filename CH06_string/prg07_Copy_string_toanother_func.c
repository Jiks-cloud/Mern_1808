#include<stdio.h>
#include<string.h>
void main(){
    char st1[100], st2[100];
    printf("Enter String: ");
    scanf("%s",&st1);

    strcpy(st2 , st1);

    printf("String 1: %s\n",st1);
    printf("String 2: %s",st2);
}