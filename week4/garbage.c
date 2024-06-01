#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main(void) {
//     int scores[1024];
//     for (int i = 0; i < 1024; i++) {
//         printf("%i\n", scores[i]);
//     }
// }

int main(void) {
    int *x;
    int *y;

    x = malloc(sizeof(int));

    x = 42;
    y = 14;

    y = x;

    *y = 13;
}