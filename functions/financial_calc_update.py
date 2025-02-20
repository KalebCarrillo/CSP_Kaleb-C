# Kaleb Carrillo, Financial Calculator Update python
def info(cost, income, type):
    percent = (cost/income)*100
    print(f"your {type} is ${cost:.2f}, Which is, {percent}, of your income. \n")


# print statment that welcomes user tells what the program does
print("Welcomes user this is a fanacial calculator for your needs.")
# ask what their income is (varible an input)
income = float(input("What is your income?\n"))
# ask what their rent is (varible an input)
rent = float(input("What is your rent?\n"))
# ask what their utlitites is (varible an input)
utlities = float(input("What is your utlitites cost?\n"))
# ask what their groceries is (varible an input)
groceries = float(input("What is groceries cost?\n"))
# ask what their transportation is (varible an input)
transportation = float(input("what is your transportation cost?\n"))
# calculate savings as 10% of income (income*.1) (varible)
savings = (income*.1)
saving = (savings/income)*100
# calculate sav ing as income-savings-rent-utilites-groceries-transportaion (varible)
spending = income-savings-rent-utlities-groceries-transportation
spendings =(spending/income)*100

info(rent, income, "rent")
info(utlities, income, "utities")
info(groceries, income, "groceries")
info(transportation, income, "transportation")
info(saving, income, "saving")
info(spending, income, "spending")
