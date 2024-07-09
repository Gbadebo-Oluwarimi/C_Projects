/*
Exercise 1-12. Write a program that prints its input one word per line
*/

#include <stdio.h>

int main(){
    #define IN 1;
    #define OUT 0;

    int c, word, state;
    while((c = getchar()) != EOF){
        if(c == ' '){
            state = OUT;
            printf("\n");
        }
            putchar(c);
    }
    return 0;
}