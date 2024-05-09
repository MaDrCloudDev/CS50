#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Error: Missing command-line argument\n");
        return 1;
    }
    printf("Hello, %s\n", argv[1]);
    return 0;
}
