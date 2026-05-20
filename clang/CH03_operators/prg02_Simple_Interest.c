#include<stdio.h>
void main(){
    double SI, P, R, N;
    printf("Enter P:");
    scanf("%lf",&P);
    printf("Enter R:");
    scanf("%lf",&R);
    printf("Enter N:");
    scanf("%lf",&N);

    SI = (P*R*N)/100;

    printf("Simple Interest : %.3lf",SI);
}