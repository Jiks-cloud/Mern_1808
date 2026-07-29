#include<stdio.h>

#define PI 3.14
#define Area(r) (PI*r*r)

int main(){
    int r;
    printf("Enter radius of circle: ");
    scanf("%d",&r);

    printf("Area of Cirlce: %.2f\n",Area(r));

    return 0;
}