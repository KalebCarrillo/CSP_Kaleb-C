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

    float utilitie = (utilities/income)*100;;
    float rents = (rent/income)*100;
    float grocerie = (groceries/income)*100;
    float transportations = (transportation/income)*100;
    float saving = (income*.1);
    float saving_percentage = (saving/income)*100;
    float spending = income-rent-utilities-groceries-transportation-saving;
    float spend = (spending/income)*100;
    
   //calculate sav ing as income-savings-rent-utilites-groceries-transportaion (varible)
    
    printf("your rent is $ %.2f. Which is %.2f %% of your income. \n", rent, rents);
    printf("Your utilities $ %.2f. Which is %.2f %% of your income. \n", utilities, utilitie);
    printf("Your groceries $ %.2f. Which is %.2f %% of your income. \n", groceries, grocerie);
    printf("Your transportation $ %.2f. Which is %.2f %% of your income. \n", transportation, transportations);
    printf("Your have $ %.2f left to spend. Which is %.2f %% of your income. \n", spending, spend);
    printf("Your savings is $ %.2f Which is %.2f percent of your income. \n", saving, saving_percentage);
     return 0;
}