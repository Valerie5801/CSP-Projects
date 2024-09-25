#include <stdio.h>
float income, rent, utilites, groceries, trans, expenses, savings, total;

float input(char type[], float var){
    printf("How much is your %s?: \n", type);
    scanf("%f", &var);

    return var;
}

void percent(char type[], int amount){
    int per = amount/income*100;
    printf("\nYour %s cost is %d%%", type, per);
    printf(" of your income.");
}

int main(void){
    printf("This is going to calculate your budget for this month.\n");
    income = input("income", income);
    rent = input("rent", rent);
    utilites = input("utilites", utilites);
    groceries = input("groceries", groceries);
    trans= input("transportation", trans);

    //calculations
    expenses = rent + utilites + groceries + trans;
    savings = income*.2;
    total = income - expenses - savings;

    printf("Your income is: $ %2.f \n", income);
    printf("Your expenses are: $ %.2f \n", expenses);
    printf("Your savings are: $ %.2f \n", savings);
    printf("Your total left to spend is: $ %.2f", total);

    percent("rent", rent);
    percent("utilites", utilites);
    percent("groceries", groceries);
    percent("transportation", trans);
    percent("savings", savings);
    percent("expenses", expenses);

    return 0;
}