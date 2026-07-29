#include<Stdio.h>
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(!(num%2 == 0)){
        printf("%d number is not Even",num);
    }
    else{
        printf("%d number is Even",num);
    }
}