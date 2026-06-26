#include<stdio.h>
int main(){
    int a[100],i,n;
    int *p = a;
    int max = *p;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        if(*(p+i)> max){
            max = *(p+i);
        }
    }
    printf("Maximum Element: %d\n",max);
    return 0;
}