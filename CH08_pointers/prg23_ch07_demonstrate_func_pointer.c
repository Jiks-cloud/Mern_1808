#include<stdio.h>
void main(){
    int a=10;
    int *p;
    p = &a;
    printf("a -- Value: %d\t Address: %p\n",a,&a);
    printf("p -- Value: %d\t Address: %p\n",*p,p);
}