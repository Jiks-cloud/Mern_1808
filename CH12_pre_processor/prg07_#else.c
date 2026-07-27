#include<stdio.h>
#define Value 3

#if Value > 5
    #define Message "Value > 5"
#else
    #define Message "Value < = 5"
#endif

int main(){
    printf("%s",Message);

    return 0;
}