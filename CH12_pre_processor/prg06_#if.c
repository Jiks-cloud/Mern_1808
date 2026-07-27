#include<stdio.h>
#define Num 10

#if Num > 5
    #define Message "Num is greater than 5"
#endif

int main(){
    
    printf("%s\n",Message);

    return 0;
}