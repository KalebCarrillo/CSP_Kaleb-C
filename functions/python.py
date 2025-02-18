# Kaleb Carrillo, Functions Notes Python

#functions hold actions to be reused
number = int(input("Tell me a number fn:\n"))
def add(numOne, numTwo):#perameters set the name of the vatiable(just for the function)
    return numOne + numTwo

#add(number, 21)#arguements set the value of the variable just for that instance of the function
#add(220, 20)
#add(999999, 1)
#add(1, 12)
#add(1, 1)

def values(type):
    return input(f"_Please give me a {type}:")

values("name")
values("place")
values("verb")
