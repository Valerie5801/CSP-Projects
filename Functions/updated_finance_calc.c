#include <stdio.h>
    float income, rent, utilites, groceries, transportation, expenses, savings, total;

void input(int typeOfMoney){
    printf("How much is your %s?", typeOfMoney);
    scanf("%f", )
}

void percent(char type[], int amount){
    int per = amount/ income*100;

    printf("\nThe percent of your income for %s is %d%%.", type, per);
}

int main(void){
    float pRent, pUtilites, pGroceries, pTransportation, pExpenses;
    printf("This is going to calculate your budget for this month.\n");
    //income
    printf("How much do you make a month?:\n");
    scanf("%f", &income);
    //rent
    printf("How much is your rent?:\n");
    scanf("%f", &rent);
    //utilites
    printf("How much do you spend on utilites?:\n");
    scanf("%f", &utilites);
    //groceries
    printf("How much do you spend on groceries?:\n");
    scanf("%f", &groceries);
    //transportation
    printf("How much do spend on transportation?:\n");
    scanf("%f", &transportation);
    //calculations
    expenses = rent + utilites + groceries + transportation;
    savings = income*.2;
    total = income - expenses - savings;

    printf("Your income is: $ %2.f \n", income);
    printf("Your expenses are: $ %.2f \n", expenses);
    printf("Your savings are: $ %.2f \n", savings);
    printf("Your total left to spend is: $ %.2f", total);
    percent("rent", rent);
    percent("utilites", utilites);
    percent("groceries", groceries);
    percent("transportation", transportation);
    return 0;
}