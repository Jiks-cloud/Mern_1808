#include<stdio.h>
void display(int n){
    if(n==0){
        return;
    }
    printf("Jiya Shah\n");
    n--;
    display(n);
}
void main(){
    int num;
    printf("Enter value for repeated output: ");
    scanf("%d",&num);
    display(num);
}