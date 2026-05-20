/*
structure of c program // documentation section
*/
#include<stdio.h> //link section

#define A 100 //definition section
#define SUM(x,y) x+y //definition section
int i = 50; //global declaration section
void display(){ //user-defined section
    printf("\nHellooo !!!\n");
}
void main(){ //main section
    printf("Hellooo......\n");
    printf("SUM of %d and %d is %d\n",A,i,SUM(A,i));
    display();
}