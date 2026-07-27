#include<stdio.h>
#include<string.h>

union Data {
    int i;
    float f;
    char str[20];
};
int main(){
    union Data d;
    d.i = 10;
    printf("Data of integer: %d\n",d.i);
    d.f = 98.5;
    printf("Data of float: %.2lf\n",d.f);
    strcpy(d.str,"Hello");
    printf("Data of string: %s\n",d.str);
    printf("After assignment: d.i=%d, d.f=%2.2lf, d.str=%s",d.i,d.f,d.str);
    return 0;
}