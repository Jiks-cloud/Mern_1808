#include<stdio.h>
#include<stdlib.h>
void main(){
    int *p,n,i,n_size;
    char choice;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter array elements: \n");
    p = calloc(n,sizeof(int));
    for(i=0; i<n; i++){
        printf("Enter data for index %d: ",i);
        scanf("%d",(p+i));
    }

    printf("-------------\n");
    for(i=0; i<n; i++){
        printf("%d\n",*(p+i));
    }
    printf("Do you want to add new elements: Yess(yY) or No(nN): ");
    scanf(" %c",&choice);

    if((choice != 'Y')&&(choice != 'y')){
        printf("Exiting....");
        exit(0);
    }
    printf("Enter the size of new elements:");
    scanf("%d",&n_size);
    
    printf("Enter elements: \n");
    for(i=n; i<n+n_size; i++){
        printf("Enter data for index %d: ",i);
        scanf("%d",(p+i));
    }
    printf("------------\n");
    for(i=0; i<n+n_size; i++){
        printf("%d\n",*(p+i));
    }
    free(p);
    printf("--------------|--------------\n");
    for(i=0; i<n+n_size; i++){
        printf("%d\n",*(p+i));
    }
}