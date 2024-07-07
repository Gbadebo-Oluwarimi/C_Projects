/*
Exercise 1-8. Write a program to count blanks, tabs, and newlines
*/

#include <stdio.h>

int main(){
    int c, b=0, t=0, nl=0;
    printf("rannnn \n");

    while ((c =getchar()) != EOF){
        if(c == '\n'){
            ++nl;
        }
        else if(c == ' '){
            ++b;
        }
        else if(c == '\t'){
            ++t;
        }

    }
    printf("%d -- New Line\n%d -- Blank space \n%d -- tabs", nl,b,t);

    return 0;
}

/*
For some reasin this code dosen't seem to work but the code is correct 
will check later


*/