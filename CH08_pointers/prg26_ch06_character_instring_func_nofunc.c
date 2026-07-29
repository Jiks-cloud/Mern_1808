#include<stdio.h>
#include<string.h>
void main(){
    char st[100],ch,*p;
    printf("Enter a string: ");
    scanf("%s",st);
    printf("Enter a character to search: ");
    scanf(" %c",&ch);
    p = strchr(st,ch);
    if(p){
        printf("%c is found at address %p\n",ch,p);
    }
    else{
        printf("%c is not found.\n",ch);
    }
}

#include<stdio.h>
void main(){
    char st[100],ch,*p;
    int i;
    printf("Enter a string: ");
    scanf("%s",st);
    printf("Enter a character to search: ");
    scanf(" %c",&ch);
    for(i=0; st[i]; i++){
        if(st[i] == ch){
            p = &st[i];
            printf(" %c is found at address %p\n",ch,p);
        }
    }
    if(!p){
        printf("%c is not found\n",ch);
    }
}