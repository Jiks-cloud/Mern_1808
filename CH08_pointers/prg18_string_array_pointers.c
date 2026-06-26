#include<stdio.h>
int main(){
    char *name[3] = {"CAMERON", "ROWAN", "COLTON"};
    for(int i=0; i<3; i++){
        printf("Name: %s\n",name[i]);
    }
    return 0;
}