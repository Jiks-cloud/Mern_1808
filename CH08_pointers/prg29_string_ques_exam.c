#include<stdio.h>
int main(){
    char st1[100],st2[100],temp[200];
    char *p1,*p2,*t;
    int len1=0, len2=0, found=0;
    printf("Enter string 1: ");
    scanf("%s",st1);
    printf("Enter string 2: ");
    scanf("%s",st2);

    p1 = st1;
    while(*p1++){
        len1++;
    }
    p2 = st2;
    while(*p2++){
        len2++;
    }
    if(len1 != len2){
        printf("Rotation not found!!..");
        return 0;
    }
    t = temp;
    p1 = st1;
    while (*p1){
        *t++ = *p1++;
    }
    p2 = st2;
    while (*p2){
        *t++ = *p2++;
    }
    *t = '\0';
    for(int i=0; i<len1; i++){
        int j=0;
        while(j<len1 && temp[i+j]==st2[j]){
            j++;
        }
        if(j == len1){
            found =1;
            break;
        }
    }
    if(!found){
        printf("Rotation is found....");
    }
    else{
        printf("Rotation is not found....");
    }
}