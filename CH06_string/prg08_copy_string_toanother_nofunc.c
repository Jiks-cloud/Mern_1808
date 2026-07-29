#include<stdio.h>
void main(){
    char st1[100],st2[100];
    int i;
    printf("Enter String: ");
    scanf("%s",&st1);

    for(i=0; st1[i]; i++){
        st2[i] = st1[i];
    }
    // i=0;
    // while(st1[i]){
    //     st2[i] = st1[i];
    //     i++;
    // }
    st2[i] = '\0';
    printf("String 1: %s\n",st1);
    printf("String 2: %s",st2);
}