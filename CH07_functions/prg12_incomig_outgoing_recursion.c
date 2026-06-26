#include<stdio.h>
void display(int n){
    if(n == 0){
        return;
    }
    printf("Recursion Incoming: %d\n",n);
    n--;
    display(n);
    printf("----Recursion Outgoing: %d\n",n);
}
void main(){
    int num;
    printf("Enter value: ");
    scanf("%d",&num);
    display(num);
}