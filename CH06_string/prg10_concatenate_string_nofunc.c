#include<stdio.h>
void main(){
    char st1[100], st2[100];
    int i,j;
    printf("Enter String 1: ");
    scanf("%s",st1);
    printf("Enter String 2: ");
    scanf("%s",st2);

    for(i=0; st1[i]; i++);
        st1[i++] = ' ';
        for(j=0; st2[j] != '\0'; i++, j++){
            st1[i] = st2[j];
        }
        st1[i]='\0';
    
    printf("\nString is: %s",st1);
}