#include<stdio.h>
void main(){
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if((c>='a' && c<='z') || (c>='A' && c<='Z')){
        printf("%c is alphabet %c",c,3);
    }
    else{
        printf("%c is not alphabet %c",c,2);
    }
}