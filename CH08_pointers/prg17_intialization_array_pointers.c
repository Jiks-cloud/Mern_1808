#include<stdio.h>
int main(){
    int a=10, b=20, c=30, i;
    int *p[3];
    p[0] = &a;
    p[1] = &b;
    p[2] = &c;

    for(i=0; i<3; i++){
        printf("value of variable %d : %d\n",i+1, *p[i]);
    }
    return 0;
}