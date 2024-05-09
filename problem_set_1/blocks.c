#include <cs50.h>
#include <stdio.h>

// int main(void) {
//     int j = 0;

//     while (j < 4) {
//         printf("#");
//         j++;
//     }
//     printf("\n");
// }

// This for loop does the same thing

// int main(void) {
//     for (int j = 0; j < 4; j++) {
//         printf("#\n#");
//     }
//     printf("\n");
// }

// But what if we want a block of hashes?

// int main(void) {
//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 4; j++) {
//             printf("#");
//         }
//         printf("\n");
//     }
// }

// But what if we want a pyramid of blocks?
void print_row(int length);

int main(void)
{
    int height = get_int("Pyramid height? ");
    for (int i = 0; i < height; i++)
    {
        print_row(i + 1);
    }
}

void print_row(int length)
{
    for (int i = 0; i < length; i++)
    {
        printf(" ");
    }
    printf("\n");
}
