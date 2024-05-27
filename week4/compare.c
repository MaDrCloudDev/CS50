#include <cs50.h>
#include <stdio.h>
#include <string.h>

// int main(void) {
//     int i = get_int("i: ");
//     int j = get_int("j: ");

//     if (i == j) {
//         printf("Same\n");
//     } else {
//         printf("Different\n");
//     }
// }

// int main(void) {
//     string s = get_string("s: ");
//     string t = get_string("t: ");

//     if (s == t) {
//         printf("Same\n");
//     } else {
//         printf("Different\n");
//     }
// } // doesn't work, because you have to do this:

// int main(void) {
//     char *s = get_string("s: ");
//     char *t = get_string("t: ");

//     if (s == t) {
//         printf("Same\n");
//     } else {
//         printf("Different\n");
//     }
// } // doesn't work because of how memory is pointed to, and strings are duplicated.

int main(void) {
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    if (strcmp(s, t) == 0) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }
} // works