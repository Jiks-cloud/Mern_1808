#include<stdio.h>
#include<math.h>
void main(){
    double x,y,ans;
    printf("Enter value of x: ");
    scanf("%lf",&x);
    printf("Enter value of y: ");
    scanf("%lf",&y);
    ans= pow(x,y);
    printf("Answer is: %.2lf\n",ans);
}