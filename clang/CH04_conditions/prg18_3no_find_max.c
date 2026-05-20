#include<stdio.h>
void main(){
    int a,b,c,lar;
    printf("Enter number 1:");
    scanf("%d",&a);
    printf("Enter number 2:");
    scanf("%d",&b);
    printf("Enter number 3:");
    scanf("%d",&c);
    
    if(a>b){
        if(a>c){
            lar=a;
        }
        else{
            lar=c;
        }
    }
    else{
        if(b>c){
            lar=b;
        }
        else{
            lar=c;
        }
    }
    printf("Largest no is: %d",lar);
}