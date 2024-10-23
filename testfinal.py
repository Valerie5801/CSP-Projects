def selRm(void):
    puzzleSel = input("Select a wall(1,2,3,4,End): ")
    if puzzleSel == "End":
        return f"You walk over to the door in your room."
    else:
        return f"You walk over to wall {puzzleSel}."

keyCount = 0
print("You look around the room and see a letter on the ground. There is also a keypad with letters on the nearby wall.")
inspect = input("Do you want to inspect further?:")
if inspect=="yes":
    print("The letter says: dear Leo. Occasionally, Leah kind of annoys the dog, Luna. \nYou should've fed the Goat by the way. At least you didn't Give the 'thing' away.")
    solution = "Lollygag"
    userThinkSol = input("What is the secret word?:")
    if userThinkSol == solution:
        print("You type in your word on the panel on the wall. Aha! The panel flips over, and on the other side is a key.\n")
        keyCount +=  1
    elif userThinkSol == "lollygag":
        print("You think that's the right word, but something is off.\n")
    else:
        print("You type in your word on the panel on the wall. Oh. Nothing happens")
else:
    print(selRm("ef"))