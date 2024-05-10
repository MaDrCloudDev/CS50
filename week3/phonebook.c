#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Linear Search
//  with strings
typedef struct
{
    string name;
    string number;
} person;

int main(void)
{

    person people[3];

    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";
    people[1].name = "David";
    people[1].number = "+1-617-495-1001";
    people[2].name = "John";
    people[2].number = "+1-617-495-1002";

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found.\n");
    return 1;
}
