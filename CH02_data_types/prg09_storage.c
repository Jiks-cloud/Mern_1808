#include<stdio.h>
// extern, static, auto, register storage class

extern int e;
static int s;
void main(){
    auto int a;
    register int r;
    printf("Auto: %d\n",a);
    printf("Register: %d\n",r);
    printf("Extern: %d\n",e);
    printf("Static: %d\n",s);
}