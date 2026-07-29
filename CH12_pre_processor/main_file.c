#include<stdio.h>
#include"header_file.h"

int main(){
    greet();
    int n;
    printf("Enter number you want to find a square: ");
    scanf("%d",&n);
    int result = square(n);
    printf("Square = %d",result);

    return 0;
}