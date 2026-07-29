#include <stdio.h>
void swapstr(char (*str1)[100], char (*str2)[100])
{
    char temp[100];
    int i;
    for (i = 0; (*str1)[i] != '\0'; i++){
        temp[i] = (*str1)[i];
    }
    temp[i] = '\0';
    for (i = 0; (*str2)[i] != '\0'; i++){
        (*str1)[i] = (*str2)[i];
    }
    (*str1)[i] = '\0';
    for (i = 0; temp[i] != '\0'; i++){
        (*str2)[i] = temp[i];
    }
    (*str2)[i] = '\0';
}
int main()
{
    char st1[100], st2[100];
    printf("Enter string 1: ");
    scanf("%s", st1);
    printf("Enter string 2: ");
    scanf("%s", st2);
    printf("String 1: %s\tString 2: %s\n", st1, st2);
    swapstr(&st1, &st2);
    printf("String 2: %s\tString 2: %s\n", st1, st2);

    return 0;
}