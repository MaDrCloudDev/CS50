#include <cs50.h>
#include <stdio.h>

// int main(void) {
//     int counter = 3;
//     while (counter > 0) {
//         printf("meow\n");
//         counter--;
//     }
// }

// he mentions the convention of using variable i instead of counter when
// dealing with a simple integer in a loop.

// int main(void) {
//     int i = 3;
//     while (i > 0) {
//         printf("meow\n");
//         i--;
//     }
// }

// then suggests, since people count upwards and not downwards typically

// int main(void) {
//     int i = 0;
//     while (i < 3) {
//         printf("meow\n");
//         i++;
//     }
// }

// but there's an even more conventional way using a for loop

void meow(int n);

int main(void)
{
    meow(5);
}

// the prototype
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
