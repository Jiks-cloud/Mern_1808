#include<stdio.h>
void main(){
    int choice,ch;
    printf(".....FOOD ORDERING SYSTEM.....");
    printf("\nEnter Your choice for food ordering ");
    printf("\n1. Vegetarian");
    printf("\n2. Non-Vegetarian");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter your choice of food in veg:");
        printf("\n1. ALFREDO PASTA");
        printf("\n2. VEG BURGER");
        printf("\n3. VEG BIRYANI");
        printf("\n4. CHEESE MARGHERITA PIZZA");
        printf("\n5. SPICY SIZZLING MOMOS");
        printf("\n6. PANNER TANDOORI WRAP\n");
        scanf("%d",&ch);
            switch (ch){
                case 1:
                    printf("Your %d ALFREDO PASTA order is served",ch);
                    break;
                case 2:
                    printf("Your %d VEG BURGER order is served",ch);
                    break;
                case 3:
                    printf("Your %d VEG BIRYANI order is served",ch);
                    break;
                case 4:
                    printf("Your %d CHEESE MARGHERITA PIZZA order is served",ch);
                    break;
                case 5:
                    printf("Your %d SPICY SIZZLING MOMOS order is served",ch);
                    break;
                case 6:
                    printf("Your %d PANNER TANDOORI WRAP order is served",ch);
                    break;
                default:
                    printf("Item you want to order is not available");
                    break;
            }
        break;
        case 2:
        printf("Enter your choice of food in non-veg:");
        printf("\n1. CHICKEN BIRYANI");
        printf("\n2. CHICKEN SHAWARMA");
        printf("\n3. EGG BIRYANI");
        printf("\n4. DOUBLE CHEESE PERI PERI OMLETTE");
        printf("\n5. CHICKEN EGG MOMOS");
        printf("\n6. MUTTON BIRYANI\n");
        scanf("%d",&ch);
            switch (ch){
                case 1:
                    printf("Your %d CHICKEN BIRYANI order is served",ch);
                    break;
                case 2:
                    printf("Your %d CHICKEN SHAWARMA order is served",ch);
                    break;
                case 3:
                    printf("Your %d EGG BIRYANI order is served",ch);
                    break;
                case 4:
                    printf("Your %d DOUBLE CHEESE PERI PERI OMLETTE order is served",ch);
                    break;
                case 5:
                    printf("Your %d CHICKEN EGG MOMOS order is served",ch);
                    break;
                case 6:
                    printf("Your %d MUTTON BIRYANI order is served",ch);
                    break;
                default:
                    printf("Item you want to order is not available");
                    break;
            }
        break;
        default:
            printf("We do not deliver other than this!!!!");
            break;
    }
}