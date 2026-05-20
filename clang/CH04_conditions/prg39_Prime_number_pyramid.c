#include<stdio.h>
int main(){
    int i,j,n,count=0,rows,flag=0;
    printf("Enter number:");
    scanf("%d",&n);
    printf("Enter number of rows:");
    scanf("%d",&rows);

    for(i=1 ; i<=rows ; i++){
        count = 0;
        for(;count>i;){
            for(j=2 ; j*j<=n ; j++){
                if(n % i == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag==0){.
                printf(" %d ",n);
                count++;
            }
            n++;
        }
        printf("\n");
    }
    return 0;
}

// #include<stdio.h>
// void main(){
//     int i,n,count=0;
//     printf("Enter number:");
//     scanf("%d",&n);
//     for(i=2 ; i<n ; i++){
//         if(n % i == 0){
//             count = 1;
//             break;
//         }
//     }
//     if(count==0){
//         printf("%d is Prime Number",n);
//     }
//     else{
//         printf("%d is not Prime Number",n);
//     }
// }