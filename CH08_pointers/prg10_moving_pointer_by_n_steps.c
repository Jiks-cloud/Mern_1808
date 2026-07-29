#include<stdio.h>
int main(){
    int a[5] = {100, 200, 300, 400, 500};
    int *p = a;
    printf("original value: %d\n",*p);
    p+=3;
    printf("after moving 3 steps: %d\n",*p);
    p-=2;
    printf("after moving 2 steps back: %d\n",*p);
    return 0;
}