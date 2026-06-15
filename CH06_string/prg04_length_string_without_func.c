#include<stdio.h>
void main(){
    char st[200];
    int len=0,i;
    printf("Enter name: ");
    scanf("%s",&st);
    for(i=0; st[i]; i++){
        len++;
    }
    printf("Length of %s is %d",st,len);
}