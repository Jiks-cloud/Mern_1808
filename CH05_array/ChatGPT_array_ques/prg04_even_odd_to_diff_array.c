#include<stdio.h>
void main(){
    int a[100],e[100],o[100],i,n,even = 0,odd = 0;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements of array:");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i] % 2 == 0){
            e[even] = a[i];
            even++;
        }
        else{
            o[odd] = a[i];
            odd++;
        }
    }
    printf("-----EVEN ARRAY-----\n");
    for(i=0; i<even; i++){
        printf(" %d ",e[i]);
    }
    printf("\n-----ODD ARRAY-----\n");
    for(i=0; i<odd; i++){
        printf(" %d ",o[i]);
    }
}