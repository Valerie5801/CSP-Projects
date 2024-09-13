#include <stdio.h>

int main(void){
    float income, rent, utilites, groceries, transportation, expenses, savings, total;
    printf("This is going to calculate your budget for this month.");
    //income
    printf("How much do you make a month?: \n");
    scanf("%f", income);
    //rent
    printf("What is your rent?: \n");
    scanf("%f", rent);
    //utilites
    printf("What is your utility price?: \n");
    scanf("%f", utilites);
    //groceries
    printf("How much do you spend on groceries?: \n");
    scanf("%f", groceries);
    //transportation
    printf("How much do you spend on transportation?: \n");
    scanf("%f", transportation);
    return 0;
}