// Kaleb Carrillo, Strings Notes C
#include <stdio.h>
#include <string.h>

char subject[500];
char name[] = "Victoria";
char sentence[] = "The quick brown fox jumps over the lazy dog.";


int main(void){
    //printf("What class are you in");
    //scanf("%s", subject);
    //fgets(subject, 500, stdin);
    //printf("you are in %s", subject);
    //name[0] = 'T';
    //name[1] = 'o';
    //name[2] = 'r';
    //name[3] = 'i';
    //name[4] = 'T';
    //name[5] = 'T';
    //name[6] = 'T';
    //printf("%lu\n",sizeof(sentence));
    //printf("%d\n",strlen(sentence));
    char one[] = "Hello ";
    char two[] = "world!";
    char three[] = "Welcome to my program";
    printf("%s\n", one);
    strcat(one, two);
    printf("%s\n", one);
    strcat(three, one);
    printf("%s\n", three);
    return 0;
}