#include<stdio.h>
#include<conio.h>
int i,n;
int min(int a[]){
    int x = a[0];
    for(i=0; i<n; i++){
        if(x > a[i]){
            x = a[i];
        }
    }
    return x;
}
int max(int a[]){
    int y = a[0];
    for(i=0; i<n; i++){
        if(y < a[i]){
            y = a[i];
        }
    }
    return y;
}
int evensum(int a[]){
    int sum_even=0;
    for(i=0; i<n; i++){
        if(a[i] % 2 == 0){
            sum_even += a[i];
        }
    }
    return sum_even;
}
void main(){
    int arr[100],mini,maxi,sum;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    mini = min(arr);
    maxi = max(arr);
    sum = evensum(arr);
    printf("MINIMUM is : %d\n",mini);
    printf("MAXIMUM is : %d\n",maxi);
    printf("SUM of Even elements: %d\n",sum);
}