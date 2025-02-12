// Kaleb Carrillo, First Program C
#include <stdio.h>
char name[20];
char subject[20];

int main(void){
    printf("What is your name: \n", name);
    scanf("%s", name);
    printf("What is your favorite subject: \n", subject);
    scanf("%s", subject);
    printf("Hello %s your favorite subject is %s.", name, subject);
    return 0;
}