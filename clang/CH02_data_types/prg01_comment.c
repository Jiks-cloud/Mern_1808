#include<stdio.h>
 void main(){
    printf("Hello\tWorld!!\n");
    /*\t : gives tab in output
    \n : new line */
    printf("123\r456\f78\b90");
    /*\r : removes
    \f : generate new line exact below where stops
    \b : backspace */
    printf("\nsay\a");
    // \a : alert
    printf("\nHelloo 'C' \"Programmer\"");
    // \".." : Highlights / display double quote in o.p
    printf("\nPrinting null: \0");
    // \0 : gives null
 }