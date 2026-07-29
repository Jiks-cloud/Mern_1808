#include<stdio.h>

int main() {
    int i, j, k;
    int num = 2;
    int rows, flag;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {

        for(j = 1; j <= i; ) {

            flag = 0;

            for(k = 2; k <= num / 2; k++) {
                if(num % k == 0) {
                    flag = 1;
                    break;
                }
            }

            if(flag == 0) {
                printf("%d ", num);
                j++;
            }

            num++;
        }

        printf("\n");
    }

    return 0;
}