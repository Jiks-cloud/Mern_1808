#include<stdio.h>
int main(){
    int a = 50;
    int *p = &a;
    printf("Value of a: %d\n",a);
    printf("Address of a: %p\n",&a);
    printf("Value using pointer: %d\n",*p);
    printf("Address using pointer: %p\n",p);
    *p = 100;
    printf("Updated value : %d",a);
    return 0;
}