#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Modify the delete_from_list function (Section l7.5) so that its first parameter has
// type struct node ** (a pointer to a pointer to the first node in a list) and its return type is
// void, delete_from_list must modify its first argument to point to the list after the
// desired node has been deleted.

// delete_from_list:

struct node {
    int value;
    struct node *next;
};

void delete_from_list(struct node **list, int n)
{
    struct node *cur, *prev;

    for (cur = *list, prev = NULL;
         cur != NULL && cur->value != n;
         prev = cur, cur = cur->next)
        ;

    if (cur == NULL)
        return;        /* n was not found */
    if (prev == NULL)
        *list = (*list)->next;  /* n is in the first node */
    else
        prev->next = cur->next; /* n is in some other node */
    free(cur);
}

void main() {
    printf("Modified delete_from_list:\n");
    printf("- First parameter is now struct node ** (pointer to pointer)\n");
    printf("- Return type is void\n");
    printf("- Modifies *list directly to point to the updated list\n");
    printf("\nUsage: delete_from_list(&list, n);\n");
}

