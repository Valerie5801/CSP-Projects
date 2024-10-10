#create loop that counts to 50
for i in range(51):
    #replace #'s divisible by 3 and 5 with FizzBuzz
    if i%3 == 0 and i%5 == 0:
        print("FizzBuzz")
    #Replace #'s divisible by 3 with Fizz
    elif i%3 == 0:
        print("Fizz")
    #replace #'s divisble by 5 with Buzz
    elif i%5 == 0:
        print("Buzz")
    #print rest of #
    else:
        print(i)