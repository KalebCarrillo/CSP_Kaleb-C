// Kaleb Carrillo, Variables Practice C
#include <stdio.h>

char name[] = "Kaleb";
int num1 = 10;
int num2 =240;
char breakfast[] = "eggs";
char color[] = "blue";
char school[] = "UCAS";
int year = 2025;
char eye[] = "brown";
int age = 15;
char subject[] = "math";

int main(void){
    printf("My name is %s.", name);
    printf(" I am %d", age);
    printf(" years old. I had %s", breakfast);
    printf(" for breakfast. I like the color %s.", color);
    printf(" My eye color is %s.", eye);
    printf(" It is %d", year);
    printf(" and I go to %s.", school);
    printf(" My favorite subject is %s", subject);
    printf(" I like the number %d", num1);
    printf(" and the number %d.", num2);
    return 0;
}