#include<stdio.h>
void main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if((ch>='0')&&(ch<='9')){
        printf("%c is Numeric",ch);
    }
    else if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z'))){
        switch(ch){
        case 'a':case 'e':case 'i':case 'o':case 'u':
        case 'A':case 'E':case 'I':case 'O':case 'U':
            printf("%c is Vowel!!..",ch);
            break;
        case 'b':case 'c':case 'd':case 'f':case 'g':case 'h':
        case 'j':case 'k':case 'l':case 'm':case 'n':case 'p':
        case 'q':case 'r':case 's':case 't':case 'v':case 'w':
        case 'x':case 'y':case 'z':case 'B':case 'C':case 'D':
        case 'F':case 'G':case 'H':case 'J':case 'K':case 'L':
        case 'M':case 'N':case 'P':case 'Q':case 'R':case 'S':
        case 'T':case 'V':case 'W':case 'X':case 'Y':case 'Z':
            printf("%c is Consonant",ch);
            break;
        }
    }
    else{
        printf("%c is a Special Character",ch);
    }
}