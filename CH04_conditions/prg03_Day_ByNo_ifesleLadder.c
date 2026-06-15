#include<Stdio.h>
void main(){
    int day;
    printf("Enter the number of day: ");
    scanf("%d",&day);

    if(day==1){
        printf("It is MONDAY!! %c\n",1);
    }
    else if(day==2){
        printf("It is TUESDAY!! %c\n",2);
    }
    else if(day==3){
        printf("It is WEDNESDAY!! %c\n",3);
    }
    else if(day==4){
        printf("It is THURSDAY!! %c\n",4);
    }
    else if(day==5){
        printf("It is FRIDAY!! %c\n",5);
    }
    else if(day==6){
        printf("It is SATURDAY!! %c\n",6);
    }
    else if(day==7){
        printf("It is SUNDAY!! %c\n",3);
    }
    else{
        printf("Enter a valid day number !!!! \n");
    }
}