#include<stdio.h>
void main(){
    int a,b,c,max;
    printf("Enter number 1:");
    scanf("%d",&a);
    printf("Enter number 2:");
    scanf("%d",&b);
    printf("Enter number 3:");
    scanf("%d",&c);

    if(a>b){
        if(a>c){
            max=a;
        }
        else{
            max=c;
        }
    }
    else{
        if(b>c){
            max=b;
        }
        else{
            max=c;
        }
    }

    printf("Maximum is: %d",max);
}