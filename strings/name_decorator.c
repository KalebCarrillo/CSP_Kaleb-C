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

    char name1 = values("name");
    printf("hello", name1);
    char name2 = values("name");
    printf("hello", name2);
    char name3 = values("name");  
    printf("hello", name3);
    char name4 = values("name");
    printf("hello", name4);
    char name5 = values("name");
    printf("hello", name5);
    return 0;
}