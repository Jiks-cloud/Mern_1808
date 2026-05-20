#include<stdio.h>

#define A 570
void main(){
    printf("Defined value: %d\n",A);

    #undef A
    #define A 845

    printf("New Defined value: %d\n",A);
}