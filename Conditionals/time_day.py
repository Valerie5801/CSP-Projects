time = int(input("What time is it?(military time no colon): "))

if time >= 500 and time < 1100:
    print("Good Morning")
elif time >= 1100 and time < 1700:
    print("Good Afternoon")
elif time >= 1700 and time < 2200:
    print("Good Evening")
else:
    print("Good Night")