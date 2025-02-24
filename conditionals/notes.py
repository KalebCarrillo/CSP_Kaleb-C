#Kaleb Carrillo, Conditionals Notes Python
name = input("What is your name?:\n")
#1. What puts something inside of the “if” statement?
if name == "Kaleb":
    print("hi Kaleb")
else: #this happens if the condition is false
    print(f"Hello {name}!")

#2. What do if statements do?
    #checks for a condittion and if it is true it will do a thing.
if name == "Kaleb": # <- this is the condition
    print("hi Kaleb") # <- what is does if true


#3. What are boolean statements? 
    #true or false statment
if name == "Kaleb": # <- the booleans statemnt. It is either true or falce
    print("hi Kaleb")
else: 
    print(f"Hello {name}!")

#4. What do else statements do?
if name == "Kaleb":
    print("hi Kaleb")
else: #If the boolean is false, the else statement happens
    print(f"Hello {name}!")

#5. What kind of statement do you use if you have more than 2 needed outcomes?
num = 2
#. computers read top to bottom, check the least likely first
if num == 0: #<-- if always starts the conditional
    print("THere are none.")
elif num == 1: #everything inbetween should be elif
    print("There is one.")
elif num <4:
    print("There are a couple.")
elif num  <10:
    print("There are few.")
else: #<- else always end the conditional
    print("There are many")

#6. What do each of the different symbols mean in conditionals?
#< = Less than
#> = Greater than
#<= = Less that or equal to
#>= = Greater that or equal to
#== = Equal to
#=== *Doesn't exsist in python
#! = not

#7. What are the 3 logical operators?
#if num <10 and > 5:
    print("This is a big single diget number.")
###print("This is a big single diget number.")
#8. What are logical operators for?
    #allows the code tp handle more diofficult questions increases complexity

#9. What does a nested conditional statement do?



#How do you write an if statement in C?
#How do you write else statements in C?
#How do you write elif/ else if statements in C?
#How do you write the 3 logical operators in C?

