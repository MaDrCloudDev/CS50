#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}

// int main(void) {
//     string s = get_string("Before: ");
//     printf("After: ");
//     for (int i = 0, n = strlen(s); i < n; i++) {
//         if (s[i] >= 'a' && s[i] <= 'z') {
//             printf("%c", toupper(s[i]));
//         } else {
//             printf("%c", s[i]);
//         }
//     }
//     printf("\n");
// }

// int main(void) {
//     string s = get_string("Before: ");
//     printf("After: ");
//     for (int i = 0, n = strlen(s); i < n; i++) {
//         if (s[i] > 'a' && s[i] <= 'z') {
//             printf("%c", s[i] - 32);
//         }
//     }
//     printf("\n");
// }

// int main(void) {
//     string s = get_string("Before: ");
//     printf("After: ");
//     for (int i = 0, n = strlen(s); i < n; i++) {
//         if (s[i] >= 'a' && s[i] <= 'z') {
//             printf("%c", s[i] - ('a' - 'A')); // Convert to uppercase
//         } else {
//             printf("%c", s[i]);
//         }
//     }
//     printf("\n"); // Print newline after the loop
// }
