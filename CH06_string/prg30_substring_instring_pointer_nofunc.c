#include<stdio.h>
void main(){
    char st[100], q[100], *p;
    int i,j=0,len,f=0;
    printf("Enter a string: ");
    scanf("%s",st);
    printf("Enter a substring to search: ");
    scanf(" %s",q);
    for(len=0; q[len]; len++);
    for(i=0; st[i]; i++, j++){
        if(j == len-1){
            f = 1;
            break;
        }
        if(st[i] != q[j]){
            j = -1;
        }
    }
    if(f){
        printf("%s is found in %s",q,st);
    }
    else{
        printf("%s is not found.",q);
    }
}