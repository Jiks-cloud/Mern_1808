#include<stdio.h>
void main(){
    int i;
    for(i=1 ; i<=10 ; i++){
        if(i==8){
            printf("Heyy!\n");
            continue;
        }
        printf("line %d.\n",i);
    }
    printf("\nHello World");
}