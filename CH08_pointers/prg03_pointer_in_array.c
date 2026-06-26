#include<stdio.h>
int main(){
    int a[5] = {10 , 20 , 30 , 40 , 50};
    int *p = a;
    printf("Pointer Arithmetic....");
    printf("First Element: %d\n",*p);
    p++;
    printf("Second Element: %d\n",*p);
    p+=2;
    printf("Fourth Element: %d\n",*p);
    p--;
    printf("Third Element: %d\n",*p);
    printf("Difference between fourth and first element: %d\n",p-a);
    return 0;
}