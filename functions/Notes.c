// Kaleb Carrillo, Functions Notes C
#include <stdio.h>

int num;
char name[50], place[50], verb[50];
void add(int numOne, int numTwo){
    return numOne + numTwo;
}

void due(char assignment[50], char day[20]){
    printf("the %s assigment is due %s", assignment, day); 
}

const char* word(char type [50]){
    char choice[50];
    printf("please give me a %s: \n", type);
}

int main(void){
    due("function Notes", "Today");
    due("function Notes", "Today");
    due("function Notes", "Today");
}

void info(float income[50], float day[20]){
    printf("the %s assigment is due %s"); 
}
