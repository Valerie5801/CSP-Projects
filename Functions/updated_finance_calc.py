print("This calculator will calculate your budget for the month.")
#getting user inputs

def iput(type):
    var = float(input(f"How much is your {type}?: "))
    #print(f"Your {type} is $.")
    return f"{var}"

income = iput("income")
rent = iput("rent")
utilites = iput("utilites")
groceries = iput("groceries")
transportation = iput("transportation")

#calculations
expenses = rent + utilites + groceries + transportation;
print(expenses)
#savings = income * 0.2;
#total = income - expenses - savings;

def percent(type, amount):
    per = amount/income*100
    print(f"Your {type} is {per}% of your income.")

#prints
#print(income)
#print(expenses)
#print(savings)
#print(total)
#percent("rent", rent)
#percent("utilites", utilites)
#percent("groceries", groceries)
#percent("transportation", transportation)