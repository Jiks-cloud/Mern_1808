#include<stdio.h>
#include<string.h>
void main(){
    char st[100];
    printf("Enter String: ");
    scanf("%s", st);
    strlwr(st);
    printf("String is : %s",st);
}