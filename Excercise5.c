/*
Verify that the expression getchar() != EOF is 0 or 1.
*/

#include <stdio.h>


int main() {
    int c;

    while (1) {
        c = getchar();
        int result = (c != EOF);
        printf("getchar() != EOF: %d\n", result);
        if (result == 0) { // Exit the loop if EOF is encountered
            break;
        }
    }

    return 0;
}
