#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    int          number;
    struct node *next;
} node;

int main(int argc, char *argv[]) {
    node *list = NULL;

    for (int i = 1; i < argc; i++) {
        int number = atoi(argv[i]);

        node *n = malloc(sizeof(node));
        if (n == NULL) {
            // free memory thus far
            return 1;
        }

        // if list is empty
        if (list == NULL) {
            // iterate over nodes in list
            for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
                // if at end of list
                if (ptr->next == NULL) {
                    // append node
                    ptr->next = n;
                    break;
                }
            }
        }
    }