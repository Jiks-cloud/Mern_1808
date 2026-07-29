#include<stdio.h>
void main(){
    char st[100];
    int i;
    printf("Enter string: ");
    scanf("%s",st);
    for(i=0; st[i]; i++){
        if(st[i]>='a' && st[i]<='z'){
            st[i] = st[i] - 32;
        }
    }
    printf("String : %s",st);
}