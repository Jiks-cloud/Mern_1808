#include<Stdio.h>
void main(){
    int a;
    int *p=&a;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("a: Address %p\t data: %d\n",&a,a);
    printf("a: Address %p\t data: %d\n",p,*p);
    printf("Size of int: %d \n",sizeof(int));
}