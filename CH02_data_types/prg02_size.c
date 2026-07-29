#include<stdio.h>
 void main(){
    char ch;
    int size;

    size=sizeof(ch);
    printf("Size of Character: %d byte\n",size);
    size=sizeof(int);
    printf("Size of Integer: %d byte\n",size);
 }