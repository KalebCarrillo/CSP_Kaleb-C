#Kaleb Carrillo, Loop Notes Python

#1. What is a loop? 
    #A s
#2. What are the two types of loops?
    #for loop
nums = [12,3,6,7,3,2]

for num in nums:
    print(num)
    #while loop
x = 0

while x < 10:
    print(x)
    x+= 1

#3. What is iteration
    #That specific instance of the loop
    #iteration the amount of times you are looping though

#4. What are lists? 
    #A variable that holds multiple values
siblings = ["Aliah", "Kayla", "Leslie"]
print(siblings[0])#prints 1 item from the list

#5. How do you make lists in python? 
    #1a. Use braketts
    #2b. Correct data types
    #3c. Coma between each item

#6. How do you make for loops in python? 
for sibling in siblings :
    print(sibling)

for x in range (0,101,20):
    print(x)
#7. How do you make while loops in python?
import random
x = 1 #variable to keep count of iteration
goose = random.randint(1,20)

while x <= 20:
    if x == goose:
        print("goose")
        break
    else:
        print("Duck")
    x+= 1\
