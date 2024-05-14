#include <cs50.h>
#include <stdio.h>
#include <string.h>

// recursive version of mario blocks
void draw(int n);

int main(void) {
    int height = get_int("Height:");
    draw(height);
}


void draw(int n) {
    // if height is less than or equal to 0, return out, otherwise
    // the function will be infinitely recursive
    // could also call it "if nothing to draw"
    if (n <= 0) {
        return;
    }

    // print pyramid of n - 1
    draw(n - 1);

    // print one more row
    for (int i = 0; i < n; i++) {
        printf("#");
    }
    printf("\n");
}