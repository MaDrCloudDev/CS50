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
            list = n;
        }
        // if number belongs at beginning of list
        else if (n->number < list->number) {
            n->next = list;
            list = n;
        }
        // if number belongs later in list
        else {
            for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
                // if at end of list
                if (ptr->next == NULL) {
                    // append node
                    ptr->next = n;
                    break;
                }
                // if in middle of list
                if (n->number < ptr->next->number) {
                    n->next = ptr->next;
                    ptr->next = n;
                    break;
                }
            }
        }
    }
}