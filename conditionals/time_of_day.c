// Kaleb Carrillo, Time of day c
#include <stdio.h>

int time = 19;

int main(void){
    if (time <=12){
        printf("Good morning!\n");
    }else if(time <=18){
        printf("Good afternoon!");
    }else if(time <=24){
        printf("Good evening!\n");
    }
    return 0;
}