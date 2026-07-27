#include<stdio.h>
#define Square(x) (x*x)

int main(){
    int n;
    printf("Enter number you want to square: ");
    scanf("%d",&n);
    printf("Square of %d is: %d\n",n,Square(n));

    #undef Square

    // printf("%d",Square(n));
    return 0;
}