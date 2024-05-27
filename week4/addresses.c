#include <cs50.h>
#include <stdio.h>
#include <string.h>

// int main(void) {
//     int n = 50;
//     int *p = &n;
//     printf("%i\n", *p);
// }

// int main(void) {
//     string s = "HI!";
//     printf("%p\n", s);
//     printf("%p\n", s+1);
//     printf("%p\n", s+2);
// }

// int main(void) {
//     char *s = "HI!";
//     printf("%s\n", s);
// }

// int main(void) {
//     char *s = "HI!";
//     printf("%c", s[0]);
//     printf("%c", s[1]);
//     printf("%c\n", s[2]);
// }

int main(void) {
    char *s = "HI!";
    printf("%c", *s);
    printf("%c", *(s+1));
    printf("%c\n", *(s+2));
}