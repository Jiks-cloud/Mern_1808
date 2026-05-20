#include<stdio.h>
void main(){
    int i;
    for(i=1 ; i<=10 ; i++){
        if(i==6){
            break;
        }
        printf("line %d \n",i);
    }
    printf("\nhello world");
}