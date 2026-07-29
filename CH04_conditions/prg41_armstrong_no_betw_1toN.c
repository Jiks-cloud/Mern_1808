#include<stdio.h>
#include<math.h>
void main(){
    int i, n, rem, arm=0, temp, num, digits=0;
    printf("Enter number:");
    scanf("%d",&n);

    for(i=1 ; i<=n ;i++){
        arm = 0;
        digits = 0;
        temp = i;
        num = i;

        while (temp > 0){
            digits++;
            temp /= 10;
        }
        temp = num;
        while(temp > 0){
            rem = temp%10;
            arm = arm+(int)pow(rem,digits);
            temp = temp/10;
        }
        // printf(" %d ",num);
        if(num == arm){
            printf(" %d ",num);
        }
    }
}