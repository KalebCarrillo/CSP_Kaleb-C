// Kaleb Carrillo, Old Enough C
#include <stdio.h>

int age = 5;

int main(void){
    if (age >= 18){
        printf("You are old enough to vote!\n");
    }else if (age >= 16){
        printf("You are old enought to drive!\n");
    }else if (age >= 15){
        printf("You are old enought to get a learners permit!\n");
    }else if (age >= 5){
        printf("You are old enought to go to school!\n");
    }else{
        printf("Sorry, you are to young to got to school!\n");
    }
    return 0;
}