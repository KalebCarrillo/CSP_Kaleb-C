# Kaleb Carrillo, Financial Calculator Update python
print("Welcomes user this is a fanacial calculator for your needs.")

def values(value):
    float(input(f"What is your {value}?\n"))

income = values("income")
rent = values("rent")
utlities = values("utlities")
groceries = values("groceries")
transportation = values("transportation")
# calculate savings as 10% of income (income*.1) (varible)
savings = (income*.1)
saving = (savings/income)*100
spending = income-savings-rent-utlities-groceries-transportation
spendings =(spending/income)*100


def info(cost, income, type):
    percent = (cost/income)*100
    print(f"your {type} is ${cost:.2f}, Which is, {percent}, of your income. \n")

info(rent, income, "rent")
info(utlities, income, "utities")
info(groceries, income, "groceries")
info(transportation, income, "transportation")
info(saving, income, "saving")
info(spending, income, "spending")
