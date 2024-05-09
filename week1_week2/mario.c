#include <stdio.h>
#include <cs50.h>

// int main(void) {
//     for (int i = 0; i < 4; i++) {
//         printf("?");
//     }
//     printf("\n");
// }

// now he wants us to do some kind of
// vertical version

int main(void)
{
    int n;

    do
    {
        n = get_int("Size: ");
    } while (n < 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
