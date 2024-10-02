import datetime

now = datetime.datetime.now().hour

if now <= 12:
    print("mroning... -n-")
elif now <= 18:
    print("Good afternoon OwO")
elif now <= 20:
    print("GOOD EVENING YAA- >:)")
else:
    print("GoOd NiGhT ovO")

print(now)