#include<stdio.h>
void main(){
    int a,b,calc;
    printf("Enter option '+, -, *, /, %%':");
    scanf("%c",&calc);
    printf("Enter number 1:");
    scanf("%d",&a);
    printf("Enter number 2:");
    scanf("%d",&b);


    switch(calc){
        case '+':
            calc = a + b;    
            printf("Addition to the values %d and %d is: %d",a,b,calc);
            break;
        case '-':
            calc = a - b;    
            printf("Subtraction to the values %d and %d is: %d",a,b,calc);
            break;
        case '*':
            calc = a * b;    
            printf("Multiplication to the values %d and %d is: %d",a,b,calc);
            break;
        case '/':
            calc = a / b;    
            printf("Division to the values %d and %d is: %d",a,b,calc);
            break;
        case '%':
            calc = a % b;    
            printf("Modulo to the values %d and %d is: %d",a,b,calc);
            break;
        default:
            printf("You Entered Invalid Character!!!....");
    }
}