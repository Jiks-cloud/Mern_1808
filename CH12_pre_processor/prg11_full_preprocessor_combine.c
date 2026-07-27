#include<stdio.h>

#define A 10
#define B

#if A == 10
    #define MSG1 "A is 10"
#elif A == 20
    #define MSG1 "A is 20"
#else 
    #define MSG1 "A is not 10 or 20"
#endif

#ifdef B
    #define MSG2 "B is defined"
#else
    #define MSG2 "B is not defined"
#endif

#ifndef C
    #define MSG3 "C is not defined"
#endif

int main(){
    printf("%s\n",MSG1);
    printf("%s\n",MSG2);
    printf("%s\n",MSG3);

    return 0;
}