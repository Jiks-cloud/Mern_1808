#include<stdio.h>
void main(){
    char text[] = "programming"; // string
    int num = 30;
    double data = 346.2351;
    
    printf("\ntext : %s\n",text); // %s for string.
    printf("num : %d\n",num); // %d for decimal
    printf("num in octal : %o\n",num); // %o for octal
    printf("num is hexadecimal : %X\n",num); // %X for hexadecimal
    printf("data with %%lf : %lf\n",data); //data without scientific notation
    printf("data with %%e : %E\n\n",data); //data with scientific notation

}