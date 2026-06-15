#include<stdio.h>
void main(){
    int roll_no;
    char div;
    printf("Enter the div-rollno like [A-42]:");
    scanf("%c-%d",&div,&roll_no);
    if((roll_no<0)||(roll_no>60)){
        printf("Invalid Roll no....");
        return(0);
    }
    switch(div){
        case 'A':
            switch(roll_no%5){
                case 0: 
                    printf("Your group is (A-1) Marvel sp..\n");
                    break;
                case 1: 
                    printf("Your group is (A-2) Wolverines..\n");
                    break;
                case 2: 
                    printf("Your group is (A-3) Spy Men..\n");
                    break;
                case 3: 
                    printf("Your group is (A-4) Schemess..\n");
                    break;
                case 4: 
                    printf("Your group is (A-5) Pogiesss..\n");
                    break;
            }
        case 'B':
            switch(roll_no%5){
                case 0: 
                    printf("Your group is (B-1) Dories..\n");
                    break;
                case 1: 
                    printf("Your group is (B-2) Ringss of Hell..\n");
                    break;
                case 2: 
                    printf("Your group is (B-3) Sypher..\n");
                    break;
                case 3: 
                    printf("Your group is (B-4) Gamerss..\n");
                    break;
                case 4: 
                    printf("Your group is (B-5) Paapi..\n");
                    break;
            }
        case 'C':
            switch(roll_no%3){
                case 0: 
                    printf("Your group is (C-1) Lokians..\n");
                    break;
                case 1: 
                    printf("Your group is (C-2) Poly-Sons..\n");
                    break;
                case 2: 
                    printf("Your group is (C-3) Mentors..\n");
                    break;
            }
        case 'd':
            switch(roll_no%2){
                case 0: 
                    printf("Your group is (D-1) The Watchers..\n");
                    break;
                case 1: 
                    printf("Your group is (D-2) Winners..\n");
                    break;
            }
        default:
            printf("INVALID DIVISIONS!!..");
    }
}