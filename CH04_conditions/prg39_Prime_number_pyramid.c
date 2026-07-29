#include<stdio.h>
int main(){
    int i,j,n,count,rows,flag;
    printf("Enter number:");
    scanf("%d",&n);
    printf("Enter number of rows:");
    scanf("%d",&rows);

    for(i=1 ; i<=rows ; i++){
        for(count=1 ; count<=i ;){
            flag = 0;
            for(j=2 ; j*j<=n ; j++){
                if(n % j == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag==0){
                printf(" %d ",n);
                count++;
            }
            n++;
        }
        printf("\n");
    }
    return 0;
}