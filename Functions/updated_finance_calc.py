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

def percent(type, amount):
    per = amount/income*100
    print(f"Your {type} is {per}% of your income.")

#prints
print("Your income is: $", income);
print("Your expenses are: $", expenses);
print("Your savings are: $", savings);
print("Your total left to spend is: $", total);
percent("rent", rent)
percent("utilites", utilites)
percent("groceries", groceries)
percent("transportation", transportation)