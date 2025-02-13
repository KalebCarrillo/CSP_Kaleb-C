// Kaleb Carrillo, Financial Calculator C

#include <stdio.h>

float income;
float rent;
float utilities;
float groceries;
float transportation;

int main(void){
    printf("Welcomes user this is a fanacial calculator for your needs. \n");
    printf("how much is your in income: \n", income);
    scanf("%f", &income);
    printf("How much is your rent: \n", rent);
    scanf("%f", &rent);
    printf("How much are your utlitiles: \n", utilities);
    scanf("%f", &utilities);
    printf("How much is are your groceries: \n");
    scanf("%f", &groceries);
    printf("How much is transportation: \n", transportation);
    scanf("%f", &transportation);

    float utilitie;
    float rents;
    float grocerie;
    float transportations;
    float saving;
    float spending;

    saving = (income*.1);
   //calculate sav ing as income-savings-rent-utilites-groceries-transportaion (varible)
    spending = income - saving - rent - utilities - groceries - transportation;

    utilitie = (utilities/income)*100;

    rents = (rent/income)*100;
  //calculate percent income of groceries (groceries/income *100) (varible)
    grocerie = (groceries/income)*100;
  //calculate percent income of transportation(transportation/income *100) (varible)
    transportations = (transportation/income)*100;
  //calculate percent income of spending (spending/income *100) (varible)
    //spending = (spend/income)*100;
 
    printf("your rent is $ %.2f. Which is %.2f %% of your income. \n", rent, rents);
    printf("Your utilities $ %.2f. Which is %.2f %% of your income. \n", utilities, utilitie);
     return 0;
}