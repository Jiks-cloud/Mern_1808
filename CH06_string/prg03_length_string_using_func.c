#include<stdio.h>
#include<string.h>
void main(){
    char st[200];
    int len;
    printf("Enter String: ");
    scanf("%s",&st);
    len = strlen(st);
    printf("Length of %s is %d",st,len);
}