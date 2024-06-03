#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *file = fopen("phonebook.csv", "a");  // options are "w" write, "r" read, "a" append
    // FILE *file represents a pointer to that file in memory. fopen opens the file, and returns the address thereof.
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    fprintf(file, "%s, %s\n", name, number);

    fclose(file);
}