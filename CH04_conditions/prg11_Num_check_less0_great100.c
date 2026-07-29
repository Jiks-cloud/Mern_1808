#include<stdio.h>
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if((num<0)||(num>100)){
        printf("You entered special number %d less than 0 OR greater than 100",num);
    }
    else{
        printf("You entered normal number %d between 0 And 100",num);
    }
}