#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write the following function:

// struct node *find_last(struct node *list, int n);

// The list parameter points to a linked list. The function should return a pointer to Lhe last
// node that contains n; it should return NULL if n doesn't appear in the list. Assume that the
// node structure is the one defined in Section 17.5.

struct node {
    int value;
    struct node *next;
};

struct node *find_last(struct node *list, int n) {
    struct node *last = NULL;
    struct node *p;
    
    for (p = list; p != NULL; p = p->next) {
        if (p->value == n) {
            last = p;
        }
    }
    
    return last;
}

void main() {
    // Example usage (would need actual linked list setup):
    printf("Function find_last returns a pointer to the last node\n");
    printf("containing the value n, or NULL if n doesn't appear.\n");
}

