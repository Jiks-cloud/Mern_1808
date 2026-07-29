#include<stdio.h>
int main(){
    char c[3] = {'A', 'B', 'C'};
    char *cp = c;
    printf("%c %c %c \n",*cp, *(cp+1), *(cp+2));

    double d[3] = {1.1, 1.2, 1.3};
    double *dp = d;
    printf("%.1f %.1f %.1f \n",*dp,*(dp+1),*(dp+2));
}