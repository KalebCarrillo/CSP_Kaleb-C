#PROGRAMMING FINAL PYTHON
print("Welcome to hangman!")
print("______________")
print("|            |")
print("|             ")
print("|             ")
print("|             ")
print("[][][]        ")


#Brahm: loop/ which word(in a list) to make the user guess
import random
words = ["software", "iconic", "dirtbike", "manager", "pepsi", "explode", "investiagator", "exciting8", "attitude", "computer", "cyber", "architect", "printer", "publication", "evaluation", "rhinoceros", "pharoah", "crocodile", "alligator", "pneumonoultramicroscopicsilicovolcanoconiosis", "bombaclat"]
random_words = random.choice(words)
print(random_words)
 

# List of words to guess
# Set up the game
print("Welcome to the guessing game!")
print("Try to guess the word from the following list:")
print(words)

# Ask the player to guess
guesses = 0
while True:
    guess = input("Enter your guess: ").lower()
    guesses += 1
    
    if guess == random_words:
        print(f"Congratulations! You've guessed the word '{random_words}' in {guesses} attempts.")
        break
    else:
        print("Wrong guess, try again!")


#Kaleb: function that runs if they get the letter wrong (includes making the hangman if wrong)
def wrd(wrong):
    float(input(f"What is your {wrong}?\n"))


#Gov: the other function that runs when the user gets it correct (includes spelling the word at the bottom)
def letter(right):
    (input(f"What is your {right}?\n"))



#Zoe: conditional runs when the user fails or wins then repeats the codez