#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Linear Search
//  with strings
int main(void)
{
    string strings[] = {"battleship", "boot", "cannon", "iron",
                        "thimble", "top hat", "fifty"};

    string s = get_string("String: ");
    for (int i = 0; i < 7; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found %s\n", s);
            return 0; // return success
        }
    }
    printf("Not Found\n");
    return 1; // return failure
}

// int main(void) {
//     int numbers[] = {20, 500, 10, 5, 100, 1, 50};

//     int n = get_int("Number: ");
//     for (int i = 0; i < 7; i++) {
//         if (numbers[i] == n) {
//             printf("Found %i\n", n);
//             return 0;
//         }
//     }
//     printf("Not Found\n");
//     return 1;
// }
