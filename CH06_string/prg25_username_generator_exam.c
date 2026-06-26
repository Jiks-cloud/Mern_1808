#include<stdio.h>
#include<string.h>
void main(){
    char f_name[100],l_name[100],b_year[100];
    printf("Enter First Name: ");
    scanf("%s",f_name);
    printf("Enter Last Name: ");
    scanf("%s",l_name);
    printf("Enter Birth Year: ");
    scanf("%s",b_year);
    
    strcat(f_name,l_name);
    strcat(f_name,b_year);

    strupr(f_name);
    printf("Generated Username: %s\n",f_name);

    printf("Length of String: %d\n",strlen(f_name));
    
    printf("Reverse Username: %s",strrev(f_name));
}