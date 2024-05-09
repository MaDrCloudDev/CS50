#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string phrase = get_string("Enter a phrase: ");
    int length = strlen(phrase);

    for (int i = 0; i < length - 1; i++)
    {
        // check if characters are NOT alphabetical
        if (phrase[i] < phrase[i - 1])
        {
            printf("Not in alphabetical order\n");
            return 0;
        }
    }
    printf("Alphabetical order\n");
}
