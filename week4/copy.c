#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main(void) {
//     string s = get_string("s: ");
//     string t = s;

//     t[0] = toupper(t[0]);

//     printf("%s\n", s);
//     printf("%s\n", t);
// }

// int main(void) {
//     char *s = get_string("s: ");
//     char *t = malloc(strlen(s) + 1);

//     for (int i = 0, n = strlen(s); i <= n; i++) {
//         t[i] = s[i];
//     }

//     if (strlen(t) > 0) {
//         t[0] = toupper(t[0]);
//     }

//     printf("%s\n", s);
//     printf("%s\n", t);
// } // but a better convention is:

int main(void) {
    char *s = get_string("s: ");
    char *t = malloc(strlen(s) + 1);
    if (t == NULL) {
        return 1;
    }  // we should do this. It's a convention, still used. If you're out
    // of memory, the thing wont work.

    strcpy(t, s);  // to form a copy of s into t. including the ending null character. But let's also look at free.

    for (int i = 0, n = strlen(s); i <= n; i++) {
        t[i] = s[i];
    }

    if (strlen(t) > 0) {
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);

    free(t);
    return 0;
}