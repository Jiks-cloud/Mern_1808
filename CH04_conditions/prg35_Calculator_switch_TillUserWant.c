#include<stdio.h>
void main(){
    int a,b;
    char choice,ch;
    do{
        printf("Enter option '+, -, *, /, %%':");
        scanf(" %c",&ch);
        printf("Enter number 1:");
        scanf("%d",&a);
        printf("Enter number 2:");
        scanf("%d",&b);
        
        switch(ch){
            case '+':
                ch = a + b;    
                printf("Addition to the values %d and %d is: %d",a,b,ch);
                break;
            case '-':
                ch = a - b;    
                printf("Subtraction to the values %d and %d is: %d",a,b,ch);
                break;
            case '*':
                ch = a * b;    
                printf("Multiplication to the values %d and %d is: %d",a,b,ch);
                break;
            case '/':
                ch = a / b;    
                printf("Division to the values %d and %d is: %d",a,b,ch);
                break;
            case '%':
                ch = a % b;    
                printf("Modulo to the values %d and %d is: %d",a,b,ch);
                break;
            default:
                printf("You Entered Invalid Character!!!....");
        }
        printf("\nDo you want to repeat??");
        printf("\n1. Yess");
        printf("\n2. Noo\n");
        scanf(" %c",&choice);
    }while((choice == 'y')||(choice == 'Y'));
    printf("\nExit....");
}