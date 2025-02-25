// Kaleb Carrillo, Conditionals notes C
#include <stdio.h>
#include <string.h> //needed to compare strings

char name[]= "kaleb";
int num; 

int main(void){
    //10. How do you write an if statement in C?
    if(strcmp(name, "kaleb") == 0){ //strcamp means string comparison
        printf("hello kaleb, welcome to my class\n");
    //11. How do you write else statements in C?
    }else{
        printf("Hello %s, welcome to class. \n", name);
    }
    
    printf("How many siblings do you have?\n");
    scanf("%d", &num);
    //12. How do you write elif/ else if statements in C?
    if(num == 0){
        printf("You are an only child\n");
    }else if(num <= 2){
        printf("You have a couple siblings\n");
    }else if(num <= 5){
        printf("Your have a few siblings\n");
    }else{
        printf("You have a lot of siblings\n");
    }
    //13. How do you write the 3 logical operators in C?
    // && = and
    // || = or
    // ! = not

    if(num == 7 || num == 13){
        printf("%d is an ulucky number\n", num);
    }else if (num <10 && num >5){
        printf("%d is a large single digit numbe\n", num);
    }else if((num < 10)){
        if(num == 12){
            printf("Thats a dozen!\n");
        }else{
            printf("%d is a big number\n", num);
        }
        printf("%d is a big number\n");
    }else{
        printf("you typed in %d\n", num);
    }
    return 0;



}
