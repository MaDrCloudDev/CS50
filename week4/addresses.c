#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    int n = 50;
    int *p = &n;
    printf("%i\n", *p);
}