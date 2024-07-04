/*
Exercise 1-3. Modify the temperature conversion program to print a heading above the table.
5 * (fahr-32) / 9;
*/

#include <stdio.h>

int main(){
    int fahr, celcius;
    int Lower, upper, step;

    Lower = 0; /* lower limit of th fahrenheit Scale */
    upper = 300; /* upper limit of th fahrenheit Scale */
    step=20; /* step limit of th fahrenheit Scale */

    fahr = Lower;
    printf("The Temperture Scale Converter");
    printf("celcius\tfahrenheit \n");
    while(fahr <= upper){
        celcius = 5 * (fahr-32) / 9;
        printf("%d\t%d \n", fahr, celcius);
        fahr=fahr+step;
    }

    
}