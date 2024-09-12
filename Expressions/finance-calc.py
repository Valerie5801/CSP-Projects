print("This calculator will calculate your budget for the month.")
#getting user inputs
income = float(input("What is your income?: "))
rent = float(input("What is your monthly rent?: "))
utilites = float(input("What is your utility cost?: "))
groceries = float(input("What is your groceries cost?: "))
transportation = float(input("What is your transportation cost?: "))

#calculations
expenses = rent + utilites + groceries + transportation;
savings = income * 0.2;
total = income - expenses - savings;

pRent = rent/income * 100;
pUtilites = utilites/income * 100;
pGroceries = groceries/income * 100;
pTransportation = transportation/income * 100;
pExpenses = expenses/income * 100;

#prints
print("Your income is: $", income);
print("Your expenses are: $", expenses);
print("Your savings are: $", savings);
print("Your total left to spend is: $", total);
print("Your rent is:", pRent, "percent of your income");
print("Your utilites is:", pUtilites, "percent of your income");
print("Your groceries is:", pGroceries, "percent of your income");
print("Your transportation is:", pTransportation, "percent of your income");