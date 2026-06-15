#include<stdio.h>
// enum datatype style
void main(){
    enum days{Mon=109,Tue,Wed,Thurs,Fri=967,Sat,Sun};
    printf("Monday:     %d\n",Mon);
    printf("Tuesday:    %d\n",Tue);
    printf("Wednesday:  %d\n",Wed);
    printf("Thursday:   %d\n",Thurs);
    printf("Friday:     %d\n",Fri);
    printf("Saturday:   %d\n",Sat);
    printf("Sunday:     %d\n",Sun);
}