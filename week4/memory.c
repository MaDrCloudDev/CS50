#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main(void) {
//     int *x = malloc(4); // give me the address of an integer, and let me store there, the return value of malloc, by asking malloc for 4 bytes (we know that ints are 4 bytes). Not the best way to do it, instead we can use sizeof(), which will always return the correct value.
// }

// int main(void) {
//     int *x = malloc(3 * sizeof(int));
//     x[1] = 72;
//     x[2] = 73;
//     x[3] = 33;  // "hi" in ASCII
// }

// int main(void) {
//     int *x = malloc(3 * sizeof(int));
//     x[0] = 72;
//     x[1] = 73;
//     x[2] = 33;// this causes a memory leak, because we didn't free the memory.
// }

int main(void) {
    int *x = malloc(3 * sizeof(int));
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
    free(x);
}
