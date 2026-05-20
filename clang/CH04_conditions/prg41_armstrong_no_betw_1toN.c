#include<stdio.h>
#include<math.h>
void main(){
    int i, n, rem, arm=0, temp, num, digits=0;
    printf("Enter number:");
    scanf("%d",&n);
    

    for(i=1 ; i<=n ;i++){
        
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

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int n;

//     printf("Enter N: ");
//     scanf("%d", &n);

//     printf("Armstrong numbers between 1 and %d are:\n", n);

//     // Loop 1 to N
//     for(int num = 1; num <= n; num++) {

//         int originalNum = num;
//         int temp = num;
//         int digits = 0;
//         int sum = 0;

//         // Count digits
//         for(; temp != 0; temp /= 10) {
//             digits++;
//         }

//         temp = num;

//         // Armstrong calculation
//         for(; temp != 0; temp /= 10) {
//             int rem = temp % 10;
//             sum += pow(rem, digits);
//         }

//         // Check Armstrong
//         if(sum == originalNum) {
//             printf("%d ", originalNum);
//         }
//     }

//     return 0;
// }