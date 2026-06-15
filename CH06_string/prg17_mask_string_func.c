#include<stdio.h>
#include<string.h>
void main(){
    char st[100],ch = '*';
    printf("Enter a String: ");
    scanf("%s",st);

    strset(st , ch);
    printf("Masked String: %s\n",st);
}