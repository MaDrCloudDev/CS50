#include <cs50.h>
#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main(void) {
    swap(1, 2);
}