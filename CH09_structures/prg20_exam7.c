#include<stdio.h>
union display{
    int i;
    float f;
    char s[100];
};
int main(){
    union display d;
    printf("Enter integer number: ");
    scanf("%d",&d.i);
    printf("Integer: %d\n",d.i);

    printf("Enter float number: ");
    scanf("%f",&d.f);
    printf("Float: %.2lf\n",d.f);

    printf("Enter string: ");
    scanf("%s",d.s);
    printf("String: %s\n",d.s);

    printf("integer: %d\nfloat: %.2lf\nstring: %s\n",d.i,d.f,d.s);
    return 0;
}