// Kaleb Carrillo, Silly Sentences C
#include <stdio.h>
// Empty string variables for ser words (minimum 3)

int main(void){char name[50], place[50], verb[50];
    printf("Hello user welcome to my silly sentence maker!\n");
    printf("Please only write one word.\n");
    //ask user for words (print statemnt with a question scanf to set to variable) (in C we need to tell the user they can type 1 word)
    printf("Please give me a famous persons name: \n", name);
    scanf("%s", name);
    printf("Please give me a place: \n", place);
    scanf("%s", place);
    printf("Please give me a verb: \n", verb);
    scanf("%s", verb);
    //print out the story with the variable inserted ("wecome %s to my program", name)
    printf("%s was going on a walk in %s well walking people started to recognize them so they started to %s away from the people till they tripped and fell.", name, place, verb);
return 0;
}