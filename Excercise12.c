/*
Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
*/

#include <stdio.h>
#define IN 1
#define OUT 0

int main(){
    int c, n=0, state;
    int ndigit[10];

    for (int i = 0; i < 10; ++i){
       ndigit[i] = 0; // setting the values of the array to zero 
       printf("%d", ndigit[i]);
    }
    state = OUT;
    while((c =getchar()) != EOF){
        if(c == ' '){
            state = OUT;
            // store the variable of "n" in ndigit and set it to zero
            ndigit[c-'0'] = n;
            printf("%d \n", n);
            n = 0;
        }
        n++;


    }
    for (int i = 0; i < 10; i++){
        printf("nums of group of words %d \n", ndigit[i]); // printing out the values of the number of text inthe array 
    }
}