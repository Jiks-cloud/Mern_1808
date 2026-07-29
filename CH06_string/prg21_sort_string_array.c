#include<stdio.h>
#include<string.h>
void main(){
    char word[100][200],temp[100];
    int i,n,j;
    printf("Enter number of words: ");
    scanf("%d",&n);
    printf("Enter those words: ");
    for(i=0; i<n; i++){
        scanf("%s",word[i]);
    }
    for(i=0; i<n; i++){
        for (j=i+1; j<n; j++){
            if(strcmp(word[i],word[j]) > 0){
                strcpy(temp,word[i]);
                strcpy(word[i],word[j]);
                strcpy(word[j],temp);
            }
        }
    }
    printf("Sorted list: \n");
    for(i=0; i<n; i++){
        printf("%s\n",word[i]);
    }
}