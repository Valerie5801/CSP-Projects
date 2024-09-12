#include <stdio.h>

int main(void){
    float income, rent, utilites, groceries, transportation, expenses, savings, total;
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
    pRent = rent/income; 
    pUtilites = utilites/income; 
    pGroceries = groceries/income; 
    pTransportation = transportation/income; 
    pExpenses = expenses/income;

    printf("Your income is: $ %2.f \n", income);
    printf("Your expenses are: $ %.2f \n", expenses);
    printf("Your savings are: $ %.2f \n", savings);
    printf("Your total left to spend is: $ %.2f \n", total);
    return 0;
}