#include<stdio.h>
#include<string.h>
void main(){
    char str[200],rev[200];
    
    printf("Enter a string: ");
    scanf("%s",str);

    strcpy(rev,str);
    strrev(rev);
    
    if (strcmp(rev,str) == 0){
        printf("PALINDROME STRING");
    }
    else{
        printf("NOT PALINDROME STRING");
    }
}