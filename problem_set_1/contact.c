#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string first_name = get_string("What's your first name? ");
    string last_name = get_string("What's your last name? ");
    string address = get_string("What's your address? ");
    string phone_number = get_string("Whats your phone number? ");

    printf("Name: %s %s\nAddress: %s\nPhone Number: %s\n", first_name, last_name, address, phone_number);
}
