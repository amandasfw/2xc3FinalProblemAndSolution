#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Suppose that f and p are declared as follows:

// struct {
//  union {
//   char a, b;
//   int c;
//  } d;
//  int e[5];
// } £, *p = &f;

// Which of the following statements are legal?
// (a) p->b = ' ';
// (b) p->e [3] = 10;
// (c) (*p).d.a = ' * ';
// (d) p->d->c = 20;

void main() {
    // The struct definition:
    // struct {
    //     union {
    //         char a, b;
    //         int c;
    //     } d;
    //     int e[5];
    // } f, *p = &f;
    
    // (a) p->b = ' '; 
    // ILLEGAL - b is a member of the union d, not a direct member of the struct
    // Should be: p->d.b = ' ';
    
    // (b) p->e[3] = 10;
    // LEGAL - e is a direct member of the struct
    
    // (c) (*p).d.a = '*';
    // LEGAL - equivalent to p->d.a = '*';
    
    // (d) p->d->c = 20;
    // ILLEGAL - d is not a pointer, it's a union member
    // Should be: p->d.c = 20;
    
    printf("Analysis:\n");
    printf("(a) p->b = ' '; - ILLEGAL (should be p->d.b)\n");
    printf("(b) p->e[3] = 10; - LEGAL\n");
    printf("(c) (*p).d.a = '*'; - LEGAL\n");
    printf("(d) p->d->c = 20; - ILLEGAL (should be p->d.c)\n");
}

