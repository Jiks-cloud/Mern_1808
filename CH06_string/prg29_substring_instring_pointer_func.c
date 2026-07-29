#include<stdio.h>
#include<string.h>
void main(){
    char st[100], q[100];
    char *p;
    printf("Enter a String: ");
    scanf("%s",st);
    printf("Enter a substring to search: ");
    scanf("%s",q);
    p = strstr(st,q);
    if(p){
        printf("%s is found in %s\n",q,st);
    }
    else{
        printf("%s is not found.\n",q);
    }
}