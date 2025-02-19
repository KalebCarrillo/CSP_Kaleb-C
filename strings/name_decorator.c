// Kaleb Carrillo, Name Decorator C
#include <stdio.h>
#include <string.h>

int main(void){
    char name[20];
    printf("Hello user this is my name decorator program!\n");
    printf("What is your name: \n");
    scanf("%s", name);

    char first[20] = ("<<<");
    char second[20] = (">>>");

    strcat(first, name);
    strcat(first, second);
    printf("%s\n", first);
    return 0;
}