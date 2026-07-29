#include<stdio.h>
void display(){
    printf(" Hello world ");
    display();
}
void main(){
    display();
}