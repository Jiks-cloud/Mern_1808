#include<stdio.h>
#include<math.h>
int main(){
    int rem, num, arm=0, temp, digits=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp = num;
    do{
        digits++;
        temp /=10;
    }while(temp !=0 );
    temp = num;
    do{
        rem = num%10;
        int power=1;
        for(int i=0; i<digits; i++){
            power*=rem;
        }
        arm+=power;
        num/=10;
    }while(num!=0);
    // // Handle 0 case
    // if (temp == 0) {
    //     digits = 1;
    // } else {
    //     while (temp > 0)
    //     {
    //         digits++;
    //         temp /= 10;
    //     }
    // }
    // temp = num;
    // while(num > 0){
    //     rem = num%10;
    //     arm = arm+(int)pow(rem,digits);
    //     num = num/10;
    // }
    if(temp == arm){
        printf("%d is an ARMSTRONG number\n",temp);
    }
    else{
        printf("%d is not an ARMSTRONG number\n",temp);
    }
    return 0;
}