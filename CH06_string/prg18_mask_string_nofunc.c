#include<stdio.h>
void main(){
    char st[100], ch='^';
    int i;
    printf("Enter a String: ");
    scanf("%s",st);
    for(i=0; st[i]; i++){
        st[i] = ch;
    }
    printf("Masked String: %s\n",st);
}