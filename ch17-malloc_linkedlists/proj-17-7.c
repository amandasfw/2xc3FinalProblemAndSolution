#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// The following loop is supposed to delete all nodes from a linked list and release the memory
// that they occupy. Unfortunately, the loop is inconect. Explain what's wrong with it and
// show how to fix the bug.

// for (p - first; p != NULL; p = p->next)
// free(p);

void main() {
    // The bug: After free(p), we try to access p->next
    // But p has been freed, so p->next is undefined behavior
    
    // Corrected version:
    // struct node *temp;
    // for (p = first; p != NULL; ) {
    //     temp = p;
    //     p = p->next;
    //     free(temp);
    // }
    
    printf("Bug explanation:\n");
    printf("The loop tries to access p->next after freeing p.\n");
    printf("Once p is freed, accessing p->next is undefined behavior.\n");
    printf("\nFixed version:\n");
    printf("struct node *temp;\n");
    printf("for (p = first; p != NULL; ) {\n");
    printf("    temp = p;\n");
    printf("    p = p->next;  // Save next pointer BEFORE freeing\n");
    printf("    free(temp);\n");
    printf("}\n");
}

