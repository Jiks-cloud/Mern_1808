// Electricity Bill (Slab System)
// Units:
// 0–100 → ₹5/unit
// 101–200 → ₹7/unit
// 200+ → ₹10/unit

#include<stdio.h>
void main(){
    int unit;
    float bill=0;
    printf("Enter units:");
    scanf("%d",&unit);

    if((unit>=0)&&(unit<=100)){
        bill= unit*5;
    }
    else if((unit>=101)&&(unit<=200)){
        bill= unit*7;
    }
    else{
        bill= unit*10;
    }
    printf("Units Consumed: %d\n",unit);
    printf("Total Bill: %f",bill);
}