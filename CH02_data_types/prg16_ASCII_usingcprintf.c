// write a program to display ASCII character by given ASCII value with help of cprintf().

#include<stdio.h>
#include<conio.h>
void main(){
    int num;

    printf("Enter a ASCII VALUE : ");
    scanf("%d",&num);
    printf("%d -> %c\n\r",num,num);

}