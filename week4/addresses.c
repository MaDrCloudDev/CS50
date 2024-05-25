#include <cs50.h>
#include <stdio.h>
#include <string.h>

// int main(void) {
//     int n = 50;
//     int *p = &n;
//     printf("%i\n", *p);
// }

int main(void) {
    string s = "HI!";
    printf("%p\n", s);
    printf("%p\n", s+1);
    printf("%p\n", s+2);
}