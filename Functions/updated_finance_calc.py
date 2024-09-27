print("This calculator will calculate your budget for the month.")
#getting user inputs

def iput(type):
    var = input(f"How much is your {type}?: ")
    #print(f"Your {type} is $.")
    return f"{var}"

def percent(type, amount):
    per = amount/income*100
    print(f"Your {type} is {per}% of your income.")

income = float(iput("income"))
rent = float(iput("rent"))
utilites = float(iput("utilites"))
groceries = float(iput("groceries"))
transportation = float(iput("transportation"))

#calculations
expenses = rent + utilites + groceries + transportation;
savings = income * 0.2;
total = income - expenses - savings;

#prints
print("Your income is $", income)
print("Your expenses is $", expenses)
print("Your savings is $", savings)
print("Your total is $", total)
percent("rent", rent)
percent("utilites", utilites)
percent("groceries", groceries)
percent("transportation", transportation)