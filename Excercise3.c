/*

Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.

*/

#include <stdio.h>

int main(){
    int fahr, celcius;
        printf("celcius\tfahreheit \n");
        celcius=0;
    while(celcius <= 300){
        fahr = 32+(5*celcius)/9;
        printf("%d\t%d\n", celcius, fahr);
        celcius=celcius+20;
    }
    return 0;

}