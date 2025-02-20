// Kaleb Carrillo, Silly Sentences C
#include <stdio.h>
// Empty string variables for ser words (minimum 3)



int main(void){
char name[50], place[50], verb[50];
    printf("Hello user welcome to my silly sentence maker!\n");
    //ask user for words (print statemnt with a question scanf to set to variable) (in C we need to tell the user they can type 1 word)
    printf("Please give me a famous persons name: \n", name);
    scanf("%s", name);
    
    //print out the story with the variable inserted ("wecome %s to my program", name)


    return 0;
}