// Kaleb Carrillo, Loop notes in c
#include <stdio.h>

int main(void){
    //1. What is a loop? 
        //a sections of code that repeat multi[les times
    //2. What are the two types of loops?
        //While loop
        int start = 0;
        while(start <5){
            printf("Hello!\n");
            start++;
        }
        //For loops
        int q;
        for(q=0;q<5;q++){
            printf("%d\n", q);
        }
    //3. What is iteration\
        //repeating something with minor changes eash time

    //4. What are arrays(lists)?
        //an array is a variable that hold multiple values

    //8. How do you make lists in C?
        //Arrays items must all be the same data type!
    int grades[] = {88, 97, 100, 30, 2, 1, -1};
        //1a. set data type 
        //2c. after naming put brackets and write the langth of the list 
        //3b. list is surrounded by curly brackets {} 
        //4d. Commans, b etween each item
    //print a single item from list
    printf("CSP Grade: %d\n", grades[2]);
    //change an item in the array
    grades[2] = 95;
    printf("CSP Grade: %d\n", grades[2]);
    //size of list in bytes
    int size = sizeof(grades);
    //length in list item
    int length = sizeof(grades)/sizeof(grades[0]);
    printf("%d\n", length);
    //array with strings
    //first bracket sets length of array(list)
    //Second bracklts sets length of each string
    char movies[][20] = {"Cars"};
    printf("The movie is %s!\n", movies[0]);
    int mlength = sizeof(movies)/sizeof(movies[0]);
    //9. How do you make for loops in C?
    //set the iterator, keep track of times through the loop
    int x;
    // in parens (starting point; ending point; count by)
    for(x=0;x<=10;x++){
        printf("%d \n", x);
    }
    int m;
    for(m=0;m<mlength;m++){
        printf("%d\n", movies[m]);
    }
    //10.How do you make while loops in C?
    int w = 0;

    while(w<100){
        printf("%d\n", w);
        w += 10;
    }
    return 0;
}