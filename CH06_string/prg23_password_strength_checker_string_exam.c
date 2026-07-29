#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main(){
    char str[200];
    int i,upper=0,digit=0;
    printf("Enter a string: ");
    scanf("%s",str);
    if((strlen(str)>=8)){
        for(i=0; str[i]!='\0'; i++){
            if(isupper(str[i])){
                upper = 1;
            }
            if (isdigit(str[i])){
                digit = 1;
            }
        }
        if(upper && digit){
            printf("Strong Password!!");
        }
        else{
            printf("Weak Password!!");
        }
    }
    else{
        printf("Weak Password!!");
    }
}