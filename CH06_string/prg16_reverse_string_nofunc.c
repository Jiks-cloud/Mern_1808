#include<stdio.h>
void main(){
    char st[100],temp;
    int i,j;
    printf("Enter String: ");
    scanf("%s",st);
    for(j=0; st[j]; j++);
        j=j-1;
    for(i=0; i<j; i++, j--){
        temp = st[i];
        st[i] = st[j];
        st[j] = temp;
    }
    printf("Reverse String : %s",st);
}