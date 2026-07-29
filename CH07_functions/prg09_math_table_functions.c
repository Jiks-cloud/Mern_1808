#include<stdio.h>
void table(int num){
    int i,n;
    printf("Enter length of table: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        printf("%2d * %2d = %2d\n",num,i,num*i);
    }
}
void main(){
    int number;
    printf("Enter number for table:");
    scanf("%d",&number);
    table(number);
}