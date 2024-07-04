/*Modify the temperature conversion program to print the table in reverse order,
that is, from 300 degrees to 0.*/

#include <stdio.h>

int main(){
    int fahr, celcius;

    celcius=300;
     printf("celcius\tfahreheit \n");
    for(celcius; celcius > 0; celcius=celcius-20){
            fahr = 32+(5*celcius)/9;
            printf("%d\t%d\n", celcius, fahr);
    };

    return 0;
}