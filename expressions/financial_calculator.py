# Kaleb Carrillo, Financial Calculator pythonS

# print statment that welcomes user tells what the program does
print("Welcomes user this is a fanacial calculator for your needs.")
# ask what their income is (varible an input)
income = float(input("What is your income?\n"))
# ask what their rent is (varible an input)
rent = float(input("What is your rent?\n"))
# ask what their utlitites is (varible an input)
utlitites = float(input("What is your utlitites cost?\n"))
# ask what their groceries is (varible an input)
groceries = float(input("What is groceries cost?\n"))
# ask what their transportation is (varible an input)
transportation = float(input("what is your transportation cost?\n"))
# calculate savings as 10% of income (income*.1) (varible)
saving = income* .1
# calculate spending as income-savings-rent-utilites-groceries-transportaion (varible)
spendings = income - saving - rent - utlitites -groceries - transportation
# calculate percent income of utilites (utilites/income *100) (varible)
utlitite = (utlitites/income)*100
# calc rent
rents = (rent/income)*100
# calculate percent income of groceries (groceries/income *100) (varible)
grocerie = (groceries/income)*100
# calculate percent income of transportation(transportation/income *100) (varible)
transportations = (transportation/income)*100
# calculate percent income of spending (spending/income *100) (varible)
spending = income*100
# Your rent i s $XX.XX which is XX% of your income. (Print)
print("your rent is $",rent, "Which is", rents, "% of your income. \n")
# Your utilites is $XX.XX which is XX% of your income. (Print)
print("your utlitites $", utlitites, "Which is", utlitite, "% of your income. \n")
# Your groceries is $XX.XX which is XX% of your income. (Print)
print("Your groceries $", groceries, "Which is", grocerie, "% of your income. \n")
# Your transportation is $XX.XX which is XX% of your income. (Print)
print("Your transportation $", transportation, "Which is", transportations, "% of your income. \n")
# Your saving is $XX.XX which is XX% of your income. (Print)
print("Your saving $", saving, "Whicj is",)
# Your spending is $XX.XX which is XX% of your income. (Print)