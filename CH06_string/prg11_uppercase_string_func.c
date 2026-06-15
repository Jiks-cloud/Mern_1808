#include<stdio.h>
#include<string.h>
void main(){
    char st[100];
    printf("Enter String: ");
    scanf("%s", st);
    strupr(st);
    printf("String is : %s",st);
}