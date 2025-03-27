#asguavf;jaskvf
#import random
#step4
HangMan_drawings = [r'''
  +---+
  |   |
  O   |
 /|\  |
 / \  |
      |
=========
''', r'''
  +---+
  |   |
  O   |
 /|\  |
 /    |
      |
=========
''', r'''
  +---+
  |   |
  O   |
 /|\  |
      |
      |
=========
''', '''
  +---+
  |   |
  O   |
 /|   |
      |
      |
=========''', '''
  +---+
  |   |
  O   |
  |   |
      |
      |
=========
''', '''
  +---+
  |   |
  O   |
      |
      |
      |
=========
''', '''
  +---+
  |   |
      |
      |
      |
      |
=========
''']
word_list =  ["elephant", "giraffe", "kangaroo", "dolphin", "crocodile", "penguin", "octopus"]
lives=6


word_to_guess = random.choice(word_list)
print(word_to_guess)

placeholder = ""
word_length = len(word_to_guess)
for position in range(word_length):
    placeholder += "_"
print(placeholder)

game_over = False
correct_letters = []


while not game_over:
    guess = input("Guess a letter: ").lower()

    display = ""

    for letter in word_to_guess:
        if letter == guess:
            display += letter
            correct_letters.append(guess)
        elif letter in correct_letters:
            display += letter
        else:
            display += "_"

    print(display)



    if guess not in word_to_guess:
        lives -=1
    if lives == 0:
        game_over = True
        print("You lose!")

    if "_" not in display:
        game_over = True
        print("You win.")



print(stages[lives])
#step5

from HangMan_words import word_list
from HangMan_drawings import stages

lives = 6

word_to_guess = random.choice(word_list)
print(word_to_guess)  # You can comment this line to hide the answer

placeholder = "_" * len(word_to_guess)
print("Word to guess: " + placeholder)

game_over = False
correct_letters = []

while not game_over:
    print(f"****************************{lives}/6 LIVES LEFT****************************")
    guess = input("Guess a letter: ").lower()

    if guess in correct_letters:
        print(f"You've already guessed the letter '{guess}'")
        continue

    display = ""

    for letter in word_to_guess:
        if letter == guess:
            display += letter
            correct_letters.append(guess)
        elif letter in correct_letters:
            display += letter
        else:
            display += "_"

    print("Word to guess: " + display)

    if guess not in word_to_guess:
        lives -= 1
        print(f"You guessed '{guess}', that's not in the word. You lose a life.")

        if lives == 0:
            game_over = True
            print(f"***********************IT WAS '{word_to_guess}'**********************")

    if "_" not in display:
        game_over = True
        pyramid = """
                *
               ***
              *****
             *******
            *********
           ***********
          *************
         ***************
        *****************
       *******************
      *********************
     ***  YOU WIN!!!  ***
      *********************
       *******************
        *****************
         ***************
          *************
           ***********
            *********
             *******
              *****
               ***
                *
        """
        print(pyramid)

    print(stages[lives])