#include<stdio.h>
int main(){
    char *color[] = {"BLUE", "BEIGE", "TURQUOISE"};
    char **p = color;
    for(int i=0; i<3; i++){
        printf(" %s\n",*(p+i));
    }
    return 0;
}